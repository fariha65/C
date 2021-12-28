//1. Write a program to find factorial of a number
#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter any positive number:");
    scanf("%d",&n);
    if (n<0)/*if user by any chance enter negative number
            then shows error*/
    {
        printf("Error!Negetive number does't exsits.\n");
    }
    else
    {

    for(i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("factorial number is:%d\n",fact);
    }
    return 0;



}
