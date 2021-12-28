//Write a C program to input any integer and check whether it is prime or not prime
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a positive number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;

        }
    }//if positive number can'tbe divisible

        if(count==0)
        {
            printf("prime number.\n");
        }
        else
        {
            printf("not prime.\n");
        }

}
