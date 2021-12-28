///Write a Program to Read n numbers and find their sum, product and average using loop.
#include<stdio.h>
int main()
{
    int n,m,i,sum=0,product=1;
    float average;
    printf("Enter your numbers:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("Number-%d :",i);
       scanf("%d",&m);
       sum=sum+n;
       product=product*m;
    }

    average=sum/n;
    printf("sum=%d",sum);
    printf("product=%d",product);
    printf("average=%f",average);
}
