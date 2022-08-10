#include<stdio.h>
#include<math.h>
int main()
{
   int n1,n2,n3,d;
   printf("enter the coordinate of x^2: ");
   scanf("%d",&n1);
   printf("enter the coordinate of x: ");
   scanf("%d",&n2);
   printf("enter the constant term: ");
   scanf("%d",&n3);
d=n2*n2-4*n1*n3;
switch(d)
{
case 0:
    printf("both the roots are: %f",-n2/(2.0*n1));
    break;
default:
    switch(d>0)
    {
    case 1:
    printf("both of the roots are %f %f ",(-n2+sqrt(d))/2*n1,(-n2-sqrt(d))/2*n1);
    break;
    case 0:
    printf("both of the roots are (-(%d)+sqrt(%d)i)/%d,(-(%d)-sqrt(%d)i)/%d",n2,-d,2*n1,n2,-d,2*n1);
    }
}
    return 0;
}