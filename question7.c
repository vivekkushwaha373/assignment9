#include<stdio.h>
int main()
{
    int unit;
    float cost;
    printf("enter electricity units ");
    scanf("%d",&unit);
    switch(unit)
    {
        case 1 ... 50:
        cost=unit*0.5;
        printf("Total cost is %f",cost+cost/5);
        break;
        case 51 ... 150:
        cost=50*0.5+(unit-50)*0.75;
        printf("Total cost is %f",cost+cost/5);
        break;
        case 151 ...250:
        cost=50*0.5+100*0.75+(unit-150)*1.2;
        printf("Total cost is %f",cost+cost/5);
        break;
        default:
        cost =50*0.5+100*0.75+100*1.2+(unit-250)*1.5;
        printf("Total cost is %f",cost+cost/5);

    }
}