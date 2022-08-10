#include<stdio.h>
int main()
{
    int var;
    printf("enter the value: ");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
        printf("System.out.printin(\"good\");");
        break;
        case 2:
        printf("System.out.printin(\"better\");");
        break;
        case 3:
        printf("System.out.printin(\"best\");");
        break;
        default :
         printf("System.out.printin(\"Invalid\");");
         

    }

    return 0;
}