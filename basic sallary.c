/*5. Write a C program to input basic salary of an employee and calculate its Gross
salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<stdio.h>
int main()
{
    float basic_sallary,HRA,DA,Gross;
    printf("Enter Basic salary of an employee:");
    scanf("%f",&basic_sallary);
    if(basic_sallary<=10000)
        {

        DA=basic_sallary*0.8;
         HRA=basic_sallary*0.2;
    }
    else if(basic_sallary<=20000)
    {

        DA=basic_sallary*0.9;
        HRA=basic_sallary*0.25;
    }
    else
    {
    (basic_sallary>20000);

        DA=basic_sallary*0.95;
         HRA=basic_sallary*0.3;
    }
    Gross=basic_sallary+HRA+DA;
    printf("%.2f",Gross);
    return 0;



}

//****
/**
 * C program to calculate gross salary of an employee
 */

/*#include <stdio.h>

int main()
{
    float basic, gross, da, hra;

    /* Input basic salary of employee */
   /* printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);


    /* Calculate D.A and H.R.A according to specified conditions */
    /*if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    /* Calculate gross salary */
   /* gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}*/

