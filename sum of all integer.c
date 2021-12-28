///2. Write a C program to calculate the sum of all integer between two range which are divisible by 19.
#include<stdio.h>
int main()
{
    int n1,n2,i,sum=0,count=0;
    printf("Enter two positive number : ");
    scanf("%d %d",&n1,&n2);
    printf("This number divisible by 19:");
    for(i=n1;i<=n2;i++)

    {
        if( i%19==0)
        {
            printf("%d..",i);
            count++;
            sum=sum+i;


        }

    }
 printf(" %d and %d = %d \n",n1,n2,count);
 printf("\n sum of all integer divisible by 19 =%d\n",sum);


}
