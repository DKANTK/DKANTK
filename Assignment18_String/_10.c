//  10.  Write a function to find the repeated character in a given string.


#include<stdio.h>


void repeatedchar(char []);

int main()
{
    int n;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    repeatedchar(str);
    return 0;  
}

void repeatedchar(char str[])
{
    int i,j,ch=0;

    for(i=0; str[i]; i++)
    {
        for(j=i+1; str[j]; j++)
        {
            if( str[i] == str[j])
            {
                ch = str[i];
             printf("%c is repeated in String\n",str[i]);
             break;
            }
        }
    }
    if(ch == 0)
      printf("No any repeated character");
}