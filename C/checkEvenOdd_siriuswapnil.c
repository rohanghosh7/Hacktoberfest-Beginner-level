#include<stdio.h>

void main()
{
    //Ask the user for a number
    int num;
    printf("Enter the number you have to check: \n");
    scanf("%d",&num);
   (num%2==0)?printf("Number is even"):printf("Number is odd");
  return 0;
}
