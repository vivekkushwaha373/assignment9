#include<stdio.h>
int main()
{
int dnum;

printf("enter the day nmmber of a week");
scanf("%d",&dnum);
switch(dnum)
{
    case 1:
    printf("Good morning Sir,it is Monday");
    break;
    case 2:
    printf("Good morning Sir,it is Tuesday");
    break;
    case 3:
    printf("Good morning Sir,it is Wednesday");
    break;
    case 4:
    printf("Good morning Sir,it is Thurday");
    break;
    case 5:
    printf("Good morning Sir,it is Friday");
    break;
    case 6:
    printf("Good morning Sir,it is Saturday");
    break;
    case 7:
    printf("Good Morning Sir,it is Sunday");
    break;
    default:
    printf("invalid entry");
}
return 0;
}