///Write a program to print the given series and calculate the sum for n terms:
//1 + 11 + 111 + ........
#include<stdio.h>
int main()
{
    int n,s=10,i,j=1,sum=0;
    printf("enter the number of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+j;
        s=s*10;
        printf("%d\n",i);

    }

}
