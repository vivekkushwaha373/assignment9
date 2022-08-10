#include<stdio.h>
int main()
{
   int x;
   printf("enter year: ");
   scanf("%d",&x);
   switch(x%100)
   {
    case 0:
    
      switch(x%400)
      {
        case 0:
        printf("it is a leap year");
        break;
        default :
        printf("it is not a leap year");
      }
    
    break;
    default:
    
        switch(x%4)
        {
            case 0:
             printf("it is a leap year");
        break;
        default:
        printf("it is not a leap year");
         break;
        }
      
    }
   

    return 0;
}