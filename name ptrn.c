#include<stdio.h>
int main()
{
    int n,r,c;
    scanf("%d",&n);
    for (r=1;r<=(n-1);r++)
    {
        for(c=1;c<=n;c++)
            if((r==1&&r==(n-1))||(c==1&&c==n))
            printf ("*");
        else
            printf(" ");
    }
    printf("\n");

}
