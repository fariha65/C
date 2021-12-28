///Write a program to print all the Strong numbers between two ranges.
#include<stdio.h>
int main()
{
    int range1,range2,j,sum=0,rem,temp,i,fact;
    printf("Enter range1 number:");
    scanf("%d",&range1);
    printf("Enter range2 number:");
    scanf("%d",&range2);
    for(j=range1;j<=range2;j++)
    {
    temp=j;
    while(temp!=0)
    {
        rem=temp %10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==j)
    {
        printf("%d\n",j);
    }
    sum=0;
}
   return 0;
}
