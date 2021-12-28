///Write a C program to find the numbers, which are divisible by 1 to 9 from 1 to n.

#include<stdio.h>
int main()
{
    int n, i, j, count=0;
    printf("Enter the limit : ");
    scanf("%d",&n);

    for(j=1; j<=n; j++)
{
    for(i=1; i<=9; i++)
    {
        if(j%i==0)
        {
            count++;
        }
    }
    if(count==9)
    {
        printf(" Number divisible by 1 to 9 : %d\n",j);
    }
    count=0;
}
return 0;
}
