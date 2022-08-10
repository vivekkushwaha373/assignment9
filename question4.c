#include<stdio.h>
#include<stdlib.h>
int main()
{
char a;int s1,s2,s3;
printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
printf("c. Check whether a given set of three numbers are equilateral triangle or not\n");
printf("d. Exit\n");
printf("Choose your option: "); 

scanf("%c",&a);
switch(a)
{
    case 'a':
    printf("enter the lenths: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2 || s2==s3 || s1==s3)
    printf("it is isoceles");
    else
    printf("it is not isoceles");
    break;
    case 'b':
     printf("enter the lenths: ");
     scanf("%d%d%d",&s1,&s2,&s3);
     if(s1*s1==s2*s2+s3*s3 || s2*s2==s1*s1+s3*s3 || s3*s3==s1*s1+s2*s2)
     {
        printf("it is a right angled triangle");
     }
     else
     printf("No,it is not a right angled traingle ");

     break;
    case 'c':
     printf("enter the lenths: ");
     scanf("%d%d%d",&s1,&s2,&s3);
     if(s1==s2 && s2==s3)
     printf("Traingle is equilateral ");
     else
     printf("Triangle is not an equilateral traingle");
     break;
    case 'd':
    exit(0);
}
}

