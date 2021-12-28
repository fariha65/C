///11.Write a C program to create Simple Calculator using switch case.
#include<stdio.h>
int main()
{
    double n1,n2,n3;
    char op;

    printf("choice your operator (+,-,*,/) :");
    scanf ("%c",&op);
    printf("Enter two nymber :");
    scanf("%lf %lf",&n1,&n2);

    switch(op)
    {
    case'+':
        {
            n3=n1+n2;

        printf("%.2lf+%.2lf=%.2lf\n",n1,n2,n3);
        break ;
        }

        case'-':
        {
            n3=n1-n2;

        printf("%.2lf-%.2lf=%.2lf\n",n1,n2,n3);
        break ;
        }
        case'*':
        {
            n3=n1*n2;

        printf("%.2lf*%.2lf=%.2lf\n",n1,n2,n3);
        break ;
        }
        case'/':
        {
            n3=n1/n2;

        printf("%.2lf/%.2lf=%.2lf\n",n1,n2,n3);
        break ;
        }

    }
}
