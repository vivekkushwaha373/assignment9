#include<stdio.h>
#include<stdlib.h>
int main()
{  
   char a;
  int num1,num2;
   printf(" a. Addition\n b. Subtraction \n c. Multiplication \n d. Division \n e. Exit");
     printf("\nchoose your option: ");
   scanf("%c",&a);
   switch(a)
   {
   case 'a':
  
   printf("enter two numbers: ");
   scanf("%d%d",&num1,&num2);
   printf("addition=%d",num1+num2);
   break;
   case 'b':
   
   printf("enter two numbers: ");
   scanf("%d%d",&num1,&num2);
   printf("Subtraction = %d",num1-num2);
   break;
   case 'c':
   
   printf("enter two numbers: ");
   scanf("%d%d",&num1,&num2);
   printf("Multi[plication = %d",num1*num2);

   break;
   case 'd':
  
   printf("enter two numbers: ");
   scanf("%d%d",&num1,&num2);
   printf("Division= %d",num1/num2);
   break;
   case 'e':
  exit(0);
   
   }
    return 0;
}