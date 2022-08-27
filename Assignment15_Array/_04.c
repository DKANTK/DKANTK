/* 4. Write a function to rotate an array by n position in d direction.
 The d is an indicative value for left or right. (For example, if array of size 5 is
 [32, 29, 40, 12, 70];  n is 2 and d is left, then the resulting array
  after left rotation 2 times is [40, 12, 70, 32, 29] ) 
  */

 #include<stdio.h>
 #include<string.h>

void rotateArray(int [], int [], int, int ,char []);

int main()
{
    int n,pos,i;
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];
    int tmp[n];
    char dir[20];

    printf("Enter the %d size of array :",n);
    for(i=0; i<n; i++)
      scanf("%d",&arr[i]);

    printf("Enter position to rotate :");
    scanf("%d",&pos);
    fflush(stdin);
    printf("Enter direction :");
    fgets(dir,20,stdin);

    rotateArray(arr,&tmp[0],n, pos, dir);

    for(i =0; i<n; i++)
      printf("%d ", tmp[i]);
    return 0;
}


void rotateArray(int arr[], int *p, int n, int pos ,char dir[])
{
    int i;

    for( i=0; i<n; i++)
    {
        if(strcmp(dir,"left"))
        {
            if(i < pos)
             p[n+(i-pos)] = arr[i];
            else
             p[i-pos] = arr[i]; 
        }
        else if(strcmp(dir,"right"))
        {
            if(i > (n+1-pos))
              p[i-(pos+1)] = arr[i];
            else
              p[i+pos] = arr[i]; 
        }
    }
}