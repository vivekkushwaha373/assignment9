#include<stdio.h>
int main()
{
int num;
printf("enter a number: ");
scanf("%d",&num);
switch(0>num)
{
    case 1:
    num=-num;
    printf("%d",num);
    break;
    case 0:
    num=-num;
    printf("%d",num);
    
}

return 0;
}