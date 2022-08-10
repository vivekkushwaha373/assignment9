#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
        printf("its upper nearest odd number is : %d",num-1);
        break;
        case 1:
        exit(0);
    }
    return 0;
}