///Write a program to print all the Armstrong numbers between two ranges.
#include<stdio.h>
int main()
{
    int temp,r,sum=0,range1,range2,i;
    printf("enter range1 number:");
    scanf("%d",&range1);
    printf("enter range2 number:");
    scanf("%d",&range2);
    for(i=range1;i<=range2;i++)
    {


    temp=i;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;

    }
    if (sum==i)
    {
        printf("%d\n",i);
    }
    sum=0;
    }


    return 0;
}
