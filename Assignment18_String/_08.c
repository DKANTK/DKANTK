//  8. Write a function to count words in a given string 


#include<stdio.h>

int countWord(char []);

int main()
{
    int n;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    n = countWord(str);
    printf("Words in  string --> %d",n);
    return 0;  
}

int countWord(char str[])
{
    int i, count=1;

    for(i=0; str[i] ; i++)
    {
        if(str[i] == ' ')
          count++;
    }
    return count;
}