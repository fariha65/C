/*6. Write a C program to compute the perimeter and area of a circle with a radius of 6 inches. Go to the editor
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches*/
#include<stdio.h>
int main()
{
    int r=6;
    double p=2*3.14*r;
    double a=3.14*(r*r);
    printf("Perimeter of the Circle =%lf inches\n",p);
    printf("Area of the Circle = %lf square inches",a);
    return 0;

}
