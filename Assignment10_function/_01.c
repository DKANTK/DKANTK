// // 1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float areaOfCircle(int );

int main()
{
  int r, area;
  printf("Enter the redius :");
  scanf("%d",&r);
  
  area  = areaOfCircle(r);
  printf("area of circle --> %d",area);
  return 0;
}

float areaOfCircle(int y){
    float area;
    area =  3.14*y*y;
    return area;
}