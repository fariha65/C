//2. Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
int main()
{
    double a,b,c,root,denom,x1,x2;/* we know quadratic equation is ax^2+bx+c=0 so  decleair uses variable  */

    printf("Enter the number of a,b,c :");
    scanf("%lf%lf%lf",&a,&b,&c);/*input are given users*/
    root=sqrt(b*b-4*a*c);/*solving root part of equation*/
    denom=2*a;
    x1=(-b+root)/denom;
    x2=(-b-root)/denom;
    printf("x1=%.2lf\n",x1);
    printf("x2=%.2lf\n",x2);
    return 0;

}
