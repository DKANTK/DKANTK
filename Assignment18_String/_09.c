// 9. Write a function to reverse a string word wise. 
// (For example if the given string is “Mysirg Education Services”
// then the resulting string should be “Services Education Mysirg” ) 


#include<stdio.h>
#include<string.h>

void reverseStr(char []);

int main()
{
    int n;
    char str[20];

    printf("Enter String :");
    fgets(str,20,stdin);

    reverseStr(str);
    return 0;  
}


void reverseStr(char str[])
{
  	int i, j, len, startIndex, endIndex;
  	
  	len = strlen(str);
  	endIndex = len - 2;
  	
  	printf("\nString in Reverse Order\n"); 	   	
  	for(i = len - 2; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= endIndex; j++)
			{
				printf("%c", str[j]);
			}
			endIndex = i - 1;
			printf(" ");				
		} 
	}
}