/*5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches. Go to the editor
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches*/
#include<stdio.h>
int main()
{
    int h=7,w=5,p,a;

    p=2*(w+h);
    a= w*h;

    printf("Perameter of the rectangle = %d inches\n ",p);
    printf("\n Area of the rectangle = %d  square inches\n",a);
    return 0;

}
