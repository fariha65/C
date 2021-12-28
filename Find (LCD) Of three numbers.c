///4. Write a Program to Find Lowest Common Divisor (LCM) of three numbers
#include<stdio.h>
int main()
{
int a,b,c,r,i;
printf("Enter 3 number :");
scanf("%d %d %d",&a,&b,&c);
while (c!=0)
{
    r=a%c&&b%c;
    b=c;
    b=r;
}
}
