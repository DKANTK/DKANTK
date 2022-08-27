// 7. Write a program in C to count the total number of alphabets,
// digits and special characters in a string. 

#include<stdio.h>

int main()
{
    int i,count_a=0,count_d=0, count_sc=0;
    char str[200];

    printf("Enter String :");
    fgets(str,200,stdin);

    for( i=0; str[i] !='\n'; i++)
    {  
        printf("%d\n",str[i]);
         switch(str[i])
    {
        case 65 ... 90:
           count_a++;
           break;
        case 97 ... 122: 
            count_a++;
            break;
        case 48 ... 57:
            count_d++;
            break;
        default :
            count_sc++;       
    }
    }

    printf("Alphabets--> %d\n",count_a);
    printf("Digits --> %d\n",count_d);
    printf("Special Charater --> %d",count_sc);
    
    return 0;  
}