//  9. Write a C program to sort a string array in ascending order. 
#include<stdio.h>

int main()
{
    int i,j,len=0;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    for(i =0; str[i]; i++)
      len++;

    for( i=0; str[i]; i++)
    {
        
        char ch;
        for(j=i+1; j<len-1; j++)
        {
          
            if( str[i] > str[j])
            {
                ch = str[i];
                str[i] = str[j];
                str[j] = ch;
            }
        }
    }

    printf("sorted string -->%s",str);
      

    return 0;  
}