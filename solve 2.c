//A program to find out the roots of any quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b, c;
    float x1, x2,x, discriminant, complex;
    printf("Please enter the value of a, b and c respectively : \n");
    scanf("%f %f %f",&a, &b, &c);

    discriminant = b*b-4*a*c;
    printf("discriminant : %.2f\n",discriminant);

    switch (discriminant>0)
    {
        case 1: //If the condition of switch is true, case 1: will execute.
            {
                x1= (-b+sqrt(discriminant))/(2*a);
                x2= (-b-sqrt(discriminant))/(2*a);
                printf("It has 2 roots.\nx1 : %.2f\nx2 : %.2f",x1,x2);
            break;
            }
        case 0: //If the condition of switch is false,  case 0: will execute
            {
                //Case 0: has two arguments. first discriminant could be less than 0 , second it could be zero (0)
                switch(discriminant<0)
                {
                    case 1: //when discriminant is less then zero there will be complex roots
                        {
                            x= -b/(2*a);
                            complex = sqrt(-discriminant)/(2*a);
                            printf("There are two separate roots of the equation.\nx1 : %.2f + %.2f i\nx2 : %.2f - %.2f i",x,complex,x,complex);
                            break;
                        }
                    case 0: // when discriminant is zero
                        {
                            x1=-b/(2*a);
                            printf("There are two equal roots.\nx1 : %.2f\nx2 : %.2f",x1,x1);
                            break;
                        }
                }
            }
            break;
    }

    return 0;
}
