/* Problem Statement : Create a menu driven program which will ask for three options : 
1. Play with computer 
2. Play with your friend 
3. Exit
  */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void run();
int playWithComputer(char (*arr)[3]);
int playWithEvilComputer(char (*arr)[3]);
int playWithFriend(char (*)[3]);
int checkX(char [][3], int, int);
int checkZero(char (*arr)[3], int, int, int);
void assignX(char (*)[3], int, int);
int checkDraw(char [][3]);

void display(char [3][3]);


// ------------------------------------------//--------------------------------


int main()
{
    run();
    getch();
    return 0;
}

// ------------------------------------------//--------------------------------




void run()
{
   char arr[3][3] = {'1','2','3','4','5','6','7','8','9'};
   int choice, rtn=0;

    cout<<"Enter your choice"<<endl;
    cout<<"1. Want to Play with Smart Computer"<<endl;
    cout<<"2. Want to Play with Evil Computer"<<endl;
    cout<<"3. Want to Play with player"<<endl;
    cout<<"4. Exit"<<endl;
    cin>>choice;
    system("cls");

    if(choice ==1 )
     rtn =  playWithComputer(arr);
    else if(choice ==2)
     rtn = playWithEvilComputer(arr); 
    else if(choice ==3)
      rtn = playWithFriend(arr);
    else if(choice == 4 )
          exit(0);
                

    system("cls");
    display(arr);
    if(rtn == 10)
      cout<<endl<<"match draw";
     else if( rtn == 0)
      cout<<endl<<"You Player Winner"; 
     else if(rtn == 11 && (choice == 1 || choice == 2))
       cout<<endl<<"Computer winner";
     else if(rtn == 11 && choice == 3)  
       cout<<"\nYour Friend Winner";

     cout<<"\n######################################################################";
    

}



int playWithComputer(char (*arr)[3])
 {
  int choice, i=0,j=0,condition=1, condition1=1 ;
  display(arr);



  while(condition !=0)
  {
    cout<<endl<<"Enter the position"<<endl;
    cout<<"\n######################################################################"<<endl;
    cin>>choice;
    system("cls");

    switch (choice)
    {
    case 1:
        i=0; j=0;
           if(arr[i][j] != '0' && arr[i][j] !='x')
           {
            arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
            if(condition == 10)
              return 10;
            if(arr[i][j+1] == '0' && arr[i][j+2] != 'x' && arr[i][j+2] != '0')
            {
              arr[i][j+2] = 'x';
              condition1 = checkX(arr, i,j-1); 
            } 
            else if(arr[i+1][j+1] == '0' && arr[i+2][j+2] != 'x' && arr[i+2][j+2] != '0')
            {
                
             arr[i+2][j+2] = 'x'; 
             condition1 = checkX(arr, i+2,j+2);
                
            }
            else if(arr[i+1][j] == '0' && arr[i+2][j] != 'x' && arr[i+2][j] != '0')
            {
               
              arr[i+2][j] = 'x'; 
              condition1 = checkX(arr, i+2,j);
                
            }
            else
            {    
                 assignX(arr, i,j);  
            }   
             
           }
            display(arr);
          
        break;
    case 2:
        i=0; j=1;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
            arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
            if(condition == 10)
              return 10;
            if(arr[i][j+1] == '0' && arr[i][j-1] != 'x'  && arr[i][j-1] != '0')
            {
                
              arr[i][j-1] = 'x'; 
              condition1 = checkX(arr, i,j-1);
                
            }
            else if(arr[i][j-1] == '0' && arr[i][j+1] != 'x' && arr[i][j+1] != '0')
            {
             
              arr[i][j+1] = 'x'; 
              condition1 = checkX(arr, i,j+1);
                
            }
            else if(arr[i+1][j] == '0' && arr[i+2][j] != 'x' && arr[i+2][j] != '0')
            {   
               
              arr[i+2][j] = 'x'; 
              condition1 = checkX(arr, i+2,j);
                
            }
            else
            {   
                 assignX(arr, i,j);  
            }
           } 
            display(arr);
        break;

    case 3:
            i=0; j=2;
           if(arr[i][j] != '0' && arr[i][j] !='x')
           {
               arr[i][j] = '0';
             condition = checkZero(arr,3,3, choice);
              if(condition == 10)
                 return 10;
            if(arr[i+1][j-1] == '0' && arr[i+2][j-2] != 'x' && arr[i+2][j-2] != '0' )
            {

              arr[i+2][j-2] = 'x'; 
              condition1 = checkX(arr, i+2,j-2);
                
            }
            else if(arr[i][j-1] == '0' && arr[i][j-2] != 'x' && arr[i][j-2] != '0' )
            {

              arr[i][j-2] = 'x'; 
              condition1 = checkX(arr, i,j-2);
              
            }
            else if(arr[i+1][j] == '0' && arr[i+2][j] != 'x' && arr[i+2][j] != '0')
            {

              arr[i+2][j] = 'x'; 
              condition1 = checkX(arr, i+2,j);
              
            }   
            else
            {   
                 assignX(arr, i,j);  
            } 
           } 
            display(arr);
        
        break;

    case 4:
            i=1; j=0;
            if(arr[i][j] != '0' && arr[i][j] !='x')
            {
              arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
             if(condition == 10)
                return 10;
            if(arr[i][j+1] == '0' && arr[i][j+2] != 'x' && arr[i][j+2] != '0')
            {

              arr[i][j+2] = 'x'; 
              condition1 = checkX(arr, i,j+2);
              
            }
            else if(arr[i-1][j] == '0' && arr[i+1][j] != 'x' && arr[i+1][j] != '0')
            {

              arr[i+1][j] = 'x'; 
              condition1 = checkX(arr, i+1,j);
              
            }
            else if(arr[i+1][j] == '0' && arr[i-1][j] != 'x' && arr[i-1][j] != '0')
            {

              arr[i-1][j] = 'x'; 
              condition1 = checkX(arr, i-1,j);
              
            }
            else
            {    
                 assignX(arr, i,j);
                   
            } 
            }
            display(arr);
            break;
    case 5:
            i=1; j=1;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
            arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
            if(condition == 10)
              return 10;

            if(arr[i][j+1] == '0' && arr[i][j-1] != 'x' && arr[i][j-1] != '0')
            {

               arr[i][j-1] = 'x'; 
               condition1 = checkX(arr, i,j-1);
              
            }
            else if(arr[i][j-1] == '0' && arr[i][j+1] != 'x' && arr[i][j+1] != '0')
            {

              arr[i][j+1] = 'x'; 
              condition1 = checkX(arr, i,j+1);
              
            }
            else if(arr[i+1][j] == '0' && arr[i-1][j] != 'x' && arr[i-1][j] != '0')
            {

              arr[i-1][j] = 'x'; 
              condition1 = checkX(arr, i-1,j);
              
            }
            else if(arr[i-1][j] == '0' && arr[i+1][j] != 'x' && arr[i+1][j] != '0')
            {

              arr[i+1][j] = 'x'; 
              condition1 = checkX(arr, i+1,j);
              
            }
            else
             assignX(arr, i,j);   
            
              
           } 
            display(arr);
    
        break;
    case 6:
            i=1; j=2;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
               arr[i][j] = '0';
             condition = checkZero(arr,3,3, choice);
              if(condition == 10)
                 return 10;
            if(arr[i-1][j] == '0' && arr[i+1][j] != 'x' && arr[i+1][j] != '0')
            {

              arr[i+1][j] = 'x'; 
              condition1 = checkX(arr, i+1,j);
              
            }
            else if(arr[i][j-1] == '0' && arr[i][j-2] != 'x' && arr[i][j-2] != '0')
            {

              arr[i][j-2] = 'x'; 
              condition1 = checkX(arr, i,j-2);
              
            }
            else if(arr[i+1][j] == '0' && arr[i-1][j] != 'x' && arr[i-1][j] != '0')
            {

              arr[i-1][j] = 'x'; 
              condition1 = checkX(arr, i-1,j);
              
            }
            else
            {    
                assignX(arr, i,j);  
            }
           }
            display(arr);
    
        break;
    case 7:
            i=2; j=0;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
               arr[i][j] = '0';
             condition = checkZero(arr,3,3, choice);
              if(condition == 10)
                 return 10;
            if(arr[i][j+1] == '0' && arr[i][j+2] != 'x' && arr[i][j+2] != '0')
            {

              arr[i][j+2] = 'x'; 
              condition1 = checkX(arr, i,j+2);
              
            }
            else if(arr[i-1][j+1] == '0' && arr[i-2][j+2] != 'x' && arr[i-2][j+2] != '0')
            {

              arr[i-2][j+2] = 'x'; 
              condition1 = checkX(arr, i-2,j+2);
              
            }
            else if(arr[i-1][j] == '0' && arr[i-2][j] != 'x' && arr[i-2][j] != '0')
            {

              arr[i-2][j] = 'x'; 
              condition1 = checkX(arr, i-2,j);
              
            }
            else
            {   
                 assignX(arr, i,j);  
            }  
           }
            display(arr);
    
        break;
    case 8:
            i=2; j=1;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
               arr[i][j] = '0';
             condition = checkZero(arr,3,3, choice);
             if(condition == 10)
                 return 10;
            if(arr[i][j+1] == '0' && arr[i][j-1] != 'x' && arr[i][j-1] != '0')
            {

              arr[i][j-1] = 'x'; 
              condition1 = checkX(arr, i,j-1);
              
            }
            else if(arr[i][j-1] == '0' && arr[i][j+1] != 'x' && arr[i][j+1] != '0' )
            {

               arr[i][j+1] = 'x'; 
               condition1 = checkX(arr, i,j+1);
              
            }
            else if(arr[i-1][j] == '0' && arr[i-2][j] != 'x' && arr[i-2][j] != '0')
            {

              arr[i-2][j] = 'x'; 
              condition1 = checkX(arr, i-2,j);
              
            }
            else
            {    
                 assignX(arr, i,j);  
            }
           }
            display(arr);
    
        break;
    case 9:
           i=2; j=2;
           if(arr[i][j] != '0' && arr[i][j] !='x')
           {
            arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
            if(condition == 10)
                return 10;
            if(arr[i][j-1] == '0' && arr[i][j-2] != 'x' && arr[i][j-2] != '0')
            {

              arr[i][j-2] = 'x'; 
              condition1 = checkX(arr, i,j-2);
              
            }
            else if(arr[i-1][j] == '0' && arr[i-2][j] != 'x' && arr[i-2][j] != '0')
            {

              arr[i-2][j] = 'x'; 
              condition1 = checkX(arr, i-2,j);
              
            }
            else if(arr[i-1][j-1] == '0' && arr[i-2][j-2] != 'x' && arr[i-2][j-2] != '0')
            {

               arr[i-2][j-2] = 'x'; 
               condition1 = checkX(arr, i-2,j-2);
              
            }
            else
            {    
                 assignX(arr, i,j);  
            }
           }                
            display(arr);
    
        break;
    
    }
 
  }
 
 if(condition == 0)
   return 0;
 else if(condition1 == 11)
   return 11;  
}

int playWithEvilComputer(char (*arr)[3])
{
  int choice, i=0,j=0,condition=1, condition1=1, count =0,t=3;
  display(arr);



   while(condition !=0)
  {
    cout<<endl<<"Enter the position"<<endl;
    cout<<"\n######################################################################"<<endl;
    cin>>choice;
    system("cls");

    switch (choice)
    {
    case 1:
        i=0; j=0;
           if(arr[i][j] != '0' && arr[i][j] !='x')
           {
            arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
            if(condition == 10)
              return 10;
           if(arr[i][j+1] == '0' && arr[i][j+2] != 'x' && arr[i][j+2] != '0')
            {
              arr[i][j+2] = 'x';
              j+=2;
              
            } 
             if(arr[i+1][j+1] == '0' && arr[i+2][j+2] != 'x' && arr[i+2][j+2] != '0')
            {
                
             arr[i+2][j+2] = 'x'; 
             i+=2; j+=2;
             
                
            }
            if(arr[i+1][j] == '0' && arr[i+2][j] != 'x' && arr[i+2][j] != '0')
            {
               
              arr[i+2][j] = 'x'; 
              i+=2;
            
                
            }
            else
            {    
                 assignX(arr, i,j);  
            }   
             
           }
            display(arr);
          
        break;
    case 2:
        i=0; j=1;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
            arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
            if(condition == 10)
              return 10;
            if(arr[i][j+1] == '0' && arr[i][j-1] != 'x'  && arr[i][j-1] != '0')
            {
                
              arr[i][j-1] = 'x'; 
              j-=1;
            
                
            }
            if(arr[i][j-1] == '0' && arr[i][j+1] != 'x' && arr[i][j+1] != '0')
            {
             
              arr[i][j+1] = 'x'; 
              j+=1;
            
                
            }
             if(arr[i+1][j] == '0' && arr[i+2][j] != 'x' && arr[i+2][j] != '0')
            {   
               
              arr[i+2][j] = 'x'; 
              i+=2;
            
                
            }
            else
            {   
                 assignX(arr, i,j);  
            }
           } 
            display(arr);
        break;

    case 3:
            i=0; j=2;
           if(arr[i][j] != '0' && arr[i][j] !='x')
           {
               arr[i][j] = '0';
             condition = checkZero(arr,3,3, choice);
              if(condition == 10)
                 return 10;
            if(arr[i+1][j-1] == '0' && arr[i+2][j-2] != 'x' && arr[i+2][j-2] != '0' )
            {

              arr[i+2][j-2] = 'x'; 
              i+=2;
              j-=2;
              
                
            }
             if(arr[i][j-1] == '0' && arr[i][j-2] != 'x' && arr[i][j-2] != '0' )
            {

              arr[i][j-2] = 'x'; 
              j-=2;
            
              
            }
             if(arr[i+1][j] == '0' && arr[i+2][j] != 'x' && arr[i+2][j] != '0')
            {

              arr[i+2][j] = 'x'; 
              i+=2;
            
              
            }   
            else
            {   
                 assignX(arr, i,j);  
            } 
           } 
            display(arr);
        
        break;

    case 4:
            i=1; j=0;
            if(arr[i][j] != '0' && arr[i][j] !='x')
            {
              arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
             if(condition == 10)
                return 10;
           if(arr[i][j+1] == '0' && arr[i][j+2] != 'x' && arr[i][j+2] != '0')
            {

              arr[i][j+2] = 'x'; 
              j+=2;
            
              
            }
             if(arr[i-1][j] == '0' && arr[i+1][j] != 'x' && arr[i+1][j] != '0')
            {

              arr[i+1][j] = 'x'; 
              i+=1;
            
              
            }
             if(arr[i+1][j] == '0' && arr[i-1][j] != 'x' && arr[i-1][j] != '0')
            {

              arr[i-1][j] = 'x'; 
              i-=1;
            
              
            }
            else
            {    
                 assignX(arr, i,j);
                   
            } 
            }
            display(arr);
            break;
    case 5:
            i=1; j=1;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
            arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
            if(condition == 10)
              return 10;

            if(arr[i][j+1] == '0' && arr[i][j-1] != 'x' && arr[i][j-1] != '0')
            {

               arr[i][j-1] = 'x';
               j-=1; 
               
              
            }
             if(arr[i][j-1] == '0' && arr[i][j+1] != 'x' && arr[i][j+1] != '0')
            {

              arr[i][j+1] = 'x'; 
              j+=1;
            
              
            }
           if(arr[i+1][j] == '0' && arr[i-1][j] != 'x' && arr[i-1][j] != '0')
            {

              arr[i-1][j] = 'x'; 
              i-=1;
            
              
            }
             if(arr[i-1][j] == '0' && arr[i+1][j] != 'x' && arr[i+1][j] != '0')
            {

              arr[i+1][j] = 'x'; 
              i+=1;
            
              
            }
            else
             assignX(arr, i,j);   
            
              
           } 
            display(arr);
    
        break;
    case 6:
            i=1; j=2;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
               arr[i][j] = '0';
             condition = checkZero(arr,3,3, choice);
              if(condition == 10)
                 return 10;
            if(arr[i-1][j] == '0' && arr[i+1][j] != 'x' && arr[i+1][j] != '0')
            {

              arr[i+1][j] = 'x'; 
              i+=1;
            
              
            }
            if(arr[i][j-1] == '0' && arr[i][j-2] != 'x' && arr[i][j-2] != '0')
            {

              arr[i][j-2] = 'x'; 
              j-=2;
            
              
            }
             if(arr[i+1][j] == '0' && arr[i-1][j] != 'x' && arr[i-1][j] != '0')
            {

              arr[i-1][j] = 'x'; 
              i-=1;
            
              
            }
            else
            {    
                assignX(arr, i,j);  
            }
           }
            display(arr);
    
        break;
    case 7:
            i=2; j=0;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
               arr[i][j] = '0';
             condition = checkZero(arr,3,3, choice);
              if(condition == 10)
                 return 10;
            if(arr[i][j+1] == '0' && arr[i][j+2] != 'x' && arr[i][j+2] != '0')
            {

              arr[i][j+2] = 'x'; 
              j+=2;
            
              
            }
           if(arr[i-1][j+1] == '0' && arr[i-2][j+2] != 'x' && arr[i-2][j+2] != '0')
            {

              arr[i-2][j+2] = 'x'; 
              i-=2; j+=2;
              
              
            }
            if(arr[i-1][j] == '0' && arr[i-2][j] != 'x' && arr[i-2][j] != '0')
            {

              arr[i-2][j] = 'x'; 
              i-=2;
            
              
            }
            else
            {   
                 assignX(arr, i,j);  
            }  
           }
            display(arr);
    
        break;
    case 8:
            i=2; j=1;
            if(arr[i][j] != '0' && arr[i][j] !='x')
           {
               arr[i][j] = '0';
             condition = checkZero(arr,3,3, choice);
             if(condition == 10)
                 return 10;
            if(arr[i][j+1] == '0' && arr[i][j-1] != 'x' && arr[i][j-1] != '0')
            {

              arr[i][j-1] = 'x'; 
              j-=1;
            
              
            }
             if(arr[i][j-1] == '0' && arr[i][j+1] != 'x' && arr[i][j+1] != '0' )
            {

               arr[i][j+1] = 'x';
               j+=1; 
               
              
            }
             if(arr[i-1][j] == '0' && arr[i-2][j] != 'x' && arr[i-2][j] != '0')
            {

              arr[i-2][j] = 'x'; 
              i-=2;
            
              
            }
            else
            {    
                 assignX(arr, i,j);  
            }
           }
            display(arr);
    
        break;
    case 9:
           i=2; j=2;
           if(arr[i][j] != '0' && arr[i][j] !='x')
           {
            
            arr[i][j] = '0';
            condition = checkZero(arr,3,3, choice);
            if(condition == 10)
                return 10;
            if(arr[i][j-1] == '0' && arr[i][j-2] != 'x' && arr[i][j-2] != '0')
            {

            
              arr[i][j-2] = 'x';
              j-=2; 
            
              
            }
            if(arr[i-1][j] == '0' && arr[i-2][j] != 'x' && arr[i-2][j] != '0')
            {
             
              arr[i-2][j] = 'x'; 
              i-=2;
            
              
            }
             if(arr[i-1][j-1] == '0' && arr[i-2][j-2] != 'x' && arr[i-2][j-2] != '0')
            {
              
               arr[i-2][j-2] = 'x';
               i-=2; j-=2; 
               
              
            }
            else
            {    
                 assignX(arr, i,j);  
            }
           }             
            display(arr);
    
        break;
    
    }
    condition1 = checkX(arr,i,j);
    if(condition1 == 11)
     return 11;
    condition = checkZero(arr ,3,3,choice);
    if(condition == 0)
     return 0;
    condition  = checkDraw(arr);
    if(condition ==10)
      return 10; 

  }
  
}

int playWithFriend(char (*arr)[3])
{
  int i, j,choice=0, p=0, condition=1, count=0;
  display(arr);

  while(condition != 0)
  {
    cout<<endl<<"Enter the position"<<endl;
    cout<<"\n######################################################################"<<endl;
    cin>>choice;
    system("cls");
    count++;
    if(count%2 == 0)
      p =2;
    else
      p=1; 
      cout<<choice<<count<<p;

    switch(choice)
    {
      case 1: i=0, j=0;
              if(arr[i][j] != '0' && arr[i][j] !='x' && p == 1)
              {
                arr[i][j] = '0';
                condition = checkZero(arr,3,3,choice);
              } 
              else if(arr[i][j] != '0' && arr[i][j] !='x' && p == 2) 
              {
                arr[i][j] = 'x';
                condition = checkX(arr,i,j);
              }
                 display(arr);
                 break;  

      case 2: i=0, j=1;
              if(arr[i][j] != '0' && arr[i][j] !='x' && p == 1)
              {
                arr[i][j] = '0';
                condition = checkZero(arr,3,3,choice);
              } 
              else if(arr[i][j] != '0' && arr[i][j] !='x' && p == 2) 
              {
                arr[i][j] = 'x';
                condition = checkX(arr,i,j);
              }
                 display(arr);
                 break;
                 
      case 3: i=0, j=2;
              if(arr[i][j] != '0' && arr[i][j] !='x' && p == 1)
              {
                arr[i][j] = '0';
                condition = checkZero(arr,3,3,choice);
              } 
              else if(arr[i][j] != '0' && arr[i][j] !='x' && p == 2) 
              {
                arr[i][j] = 'x';
                condition = checkX(arr,i,j);
              }
                 display(arr);
                 break; 

     case 4: i=1, j=0;
              if(arr[i][j] != '0' && arr[i][j] !='x' && p == 1)
              {
                arr[i][j] = '0';
                condition = checkZero(arr,3,3,choice);
              } 
              else if(arr[i][j] != '0' && arr[i][j] !='x' && p == 2) 
              {
                arr[i][j] = 'x';
                condition = checkX(arr,i,j);
              }
                 display(arr);
                 break;

     case 5:  i=1, j=1;
              if(arr[i][j] != '0' && arr[i][j] !='x' && p == 1)
              {
                arr[i][j] = '0';
                condition = checkZero(arr,3,3,choice);
              } 
              else if(arr[i][j] != '0' && arr[i][j] !='x' && p == 2) 
              {
                arr[i][j] = 'x';
                condition = checkX(arr,i,j);
              }
                 display(arr);
                 break;;  

      case 6: i=1, j=2;
              if(arr[i][j] != '0' && arr[i][j] !='x' && p == 1)
              {
                arr[i][j] = '0';
                condition = checkZero(arr,3,3,choice);
              } 
              else if(arr[i][j] != '0' && arr[i][j] !='x' && p == 2) 
              {
                arr[i][j] = 'x';
                condition = checkX(arr,i,j);
              }
                 display(arr);
                 break;
                 
      case 7: i=2, j=0;
              if(arr[i][j] != '0' && arr[i][j] !='x' && p == 1)
              {
                arr[i][j] = '0';
                condition = checkZero(arr,3,3,choice);
              } 
              else if(arr[i][j] != '0' && arr[i][j] !='x' && p == 2) 
              {
                arr[i][j] = 'x';
                condition = checkX(arr,i,j);
              }
                 display(arr);
                 break;

     case 8: i=2, j=1;
              if(arr[i][j] != '0' && arr[i][j] !='x' && p == 1)
              {
                arr[i][j] = '0';
                condition = checkZero(arr,3,3,choice);
              } 
              else if(arr[i][j] != '0' && arr[i][j] !='x' && p == 2) 
              {
                arr[i][j] = 'x';
                condition = checkX(arr,i,j);
              }
                 display(arr);
                 break;

     case 9:  i=2, j=2;
              if(arr[i][j] != '0' && arr[i][j] !='x' && p == 1)
              {
                arr[i][j] = '0';
                condition = checkZero(arr,3,3,choice);
              } 
              else if(arr[i][j] != '0' && arr[i][j] !='x' && p == 2) 
              {
                arr[i][j] = 'x';
                condition = checkX(arr,i,j);
              }
                 display(arr);
                 break;

    }
     if(condition == 11)
       return 11;
      else if(condition ==10)
        return 10; 
  }
   if(condition == 0)
     return 0;
}


void assignX(char (*arr)[3], int i, int j)
{
  if(arr[0][0] != '0' && arr[0][0] != 'x')
    arr[0][0] = 'x';
  else if(arr[0][1] != '0' && arr[0][1] != 'x')
    arr[0][1] = 'x';
  else if(arr[0][2] != '0' && arr[0][2] != 'x')
    arr[0][2] = 'x';
  else if(arr[1][0] != '0' && arr[1][0] != 'x')
    arr[1][0] = 'x';
  else if(arr[1][1] != '0' && arr[1][1] != 'x')
    arr[1][1] = 'x';
  else if(arr[1][2] != '0' && arr[1][2] != 'x')
    arr[1][2] = 'x'; 
  else if(arr[2][0] != '0' && arr[2][0] != 'x')
    arr[2][0] = 'x';
  else if(arr[2][1] != '0' && arr[2][1] != 'x')
    arr[2][1] = 'x';
  else if(arr[2][2] != '0' && arr[2][2] != 'x')
    arr[2][2] = 'x';       
       
}

int checkZero(char (*arr)[3], int row, int col, int choice)
{
  int i, j, count1=0;

  for( i=0; i<row; i++)
  {
    for(j=0; j<col; j++)
    {
      
      if( arr[i][j] == '0')
       count1++;
    }
  }
  if(count1 == 5)
    return 10;

  switch(choice)

  {
    case 1: i=0; j=0;
           if(arr[i][j+1] == '0')
           {
            if( arr[i][j+2] == '0')
                return 0;
           }
          else  if(arr[i+1][j+1] == '0')
           {
            if( arr[i+2][j+2] == '0')
                return 0;
           }
          else  if(arr[i+1][j] == '0')
           {
            if( arr[i+2][j] == '0')
                return 0;
           }
           break;
  
    case 2: i=0; j=1;
           if(arr[i][j+1] == '0')
           {
            if( arr[i][j-1] == '0')
                return 0;
           }
           else if(arr[i+1][j] == '0')
           {
            if( arr[i+2][j] == '0')
                return 0;
           }
           break;
         
    case 3: i=0; j=2;
           if(arr[i][j-1] == '0')
           {
            if( arr[i][j-2] == '0')
                return 0;
           }
           else if(arr[i+1][j] == '0')
           {
            if( arr[i+2][j] == '0')
                return 0;
           }
           break;
          
    case 4: i=1; j=0;
           if(arr[i][j+1] == '0')
           {
            if( arr[i][j+2] == '0')
               return 0;
           }
           else if(arr[i+1][j] == '0')
           {
            if( arr[i-1][j] == '0')
                return 0;
           }
           else if(arr[i-1][j] == '0')
           {
            if( arr[i+1][j] == '0')
                return 0;
           }
           break;
    case 5: i=1; j=1;
           if(arr[i][j+1] == '0')
           {
            if( arr[i][j-1] == '0')
                return 0;
           }
           else if(arr[i+1][j+1] == '0')
           {
            if( arr[i-1][j-1] == '0')
                return 0;
           }
           else if(arr[i+1][j] == '0')
           {
            if( arr[i-1][j] == '0')
                return 0;
           }
          else if(arr[i-1][j] == '0')
           {
             if( arr[i+1][j] == '0')
                return 0;
           }
           break;
    case 6: i=1; j=2;
           if(arr[i][j-1] == '0')
           {
            if( arr[i][j-2] == '0')
                return 0;
           }
           else if(arr[i+1][j] == '0')
           {
            if( arr[i-1][j] == '0')
                return 0;
           }
           else if(arr[i-1][j] == '0')
           {
            if( arr[i+1][j] == '0')
                return 0;
           }
           break;
  
    case 7: i=2; j=0;
           if(arr[i][j+1] == '0')
           {
            if( arr[i][j+2] == '0')
                return 0;
           }
           else if(arr[i-1][j+1] == '0')
           {
            if( arr[i-2][j-1] == '0')
                return 0;
           }
          else  if(arr[i-1][j] == '0')
           {
            if( arr[i-2][j] == '0')
                return 0;
           }
           break;
    case 8: i=2; j=1;
           if(arr[i][j+1] == '0')
           {
            if( arr[i][j-1] == '0')
                return 0;
           }
           else if(arr[i-1][j] == '0')
           {
            if( arr[i-2][j] == '0')
                return 0;
           }
           else if(arr[i][j-1] == '0')
           {
            if( arr[i][j+1] == '0')
                return 0;
           }
           break;
    case 9: i=2; j=2;
           if(arr[i][j-1] == '0')
           {
            if( arr[i][j-2] == '0')
                return 0;
           }
           else if(arr[i-1][j-1] == '0')
           {
            if( arr[i-2][j-2] == '0')
                return 0;
           }
           else if(arr[i-1][j] == '0')
           {
            if( arr[i-2][j] == '0')
                return 0;
           }
           break;
    default : return 101;       
  }





}

int checkX(char arr[][3], int i, int j )
{

  if( j==0 || j==2)
{
  if(arr[i][j+1] == 'x'  )
  { 
    if(arr[i][j+2] == 'x')
      return 11;
  }
  else if(arr[i+1][j+1] == 'x'  )
  {
    if(arr[i+2][j+2] == 'x')
      return 11;
  }
  else if(arr[i+1][j] == 'x'  )
  {
    if(arr[i+2][j] == 'x')
      return 11;
    else if(arr[i-1][j] == 'x')  
      return 11;
  }
  else if(arr[i-1][j] == 'x'  )
  {
    if(arr[i-2][j] == 'x')
      return 11;
    else if(arr[i+1][j] == 'x')  
      return 11;
  } 
  
}
else if( j==1)
{
 if(arr[i+1][j] == 'x'  )
  {
    if(arr[i+2][j] == 'x')
      return 11;
    else if(arr[i-1][j] == 'x')  
      return 11;
  }
 else if(arr[i-1][j] == 'x'  )
  {
    if(arr[i-2][j] == 'x')
      return 11;
    else if(arr[i+1][j] == 'x')  
      return 11;
  }
 else if(arr[i][j+1] == 'x'  )
  {
   if(arr[i][j-1] == 'x')  
      return 11;
  }
 else if(arr[i][j-1] == 'x'  )
  {
   if(arr[i][j+1] == 'x')  
      return 11;
  }
}

}

int checkDraw( char arr[][3])
{
    int i, j, count1=0;

  for( i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      
      if( arr[i][j] == 'x')
       count1++;
    }
  }
  if(count1 == 5)
    return 10;

}

void display(char arr[3][3])
{
    cout<<"############################ Tic Tac Toe #############################"<<endl;
    cout<<"\n\nFirst Player 0";
    cout<<"\nSecond Player x\n\n\n";

    cout<<"        |        |        "<<endl;
    cout<<"   "<<arr[0][0]<<"    |   "<<arr[0][1]<<"    |   "<<arr[0][2]<<endl;
    cout<<"________|________|_______"<<endl;

    cout<<"        |        |        "<<endl;
    cout<<"   "<<arr[1][0]<<"    |   "<<arr[1][1]<<"    |   "<<arr[1][2]<<endl;
    cout<<"________|________|_______"<<endl;

    cout<<"        |        |        "<<endl;
    cout<<"   "<<arr[2][0]<<"    |   "<<arr[2][1]<<"    |   "<<arr[2][2]<<endl;
    cout<<"        |        |     "<<endl;

    
   cout<<"\n\n\n######################################################################";
}