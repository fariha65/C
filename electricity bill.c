/*#include<stdio.h>

int main()
{
    int eu;
    float eb, surcharge, total_eb;
    printf("electricity unit: ");
    scanf("%d",&eu);
    if(eu<=50)
    {
        eb=(eu*0.50);
       // printf("electricity bill is %f\n",eb);
    }
    else if(eu<=150)
    {
       eb=25+((eu-50)*0.75);
        //printf("electricity bill is %f\n",eb);
    }
    else if(eu<=250)
    {
    eb=100+((eu-150)*1.20);
        //printf("electricity bill is %f\n",eb);
    }
    else
    {
    eb=150+((eu-250)*1.50);
        //printf("electricity bill is %f\n",eb=150+((eu-250)*1.50));
    }
    surcharge = eb*0.2;
    total_eb=eb + surcharge;
    printf("total electricity bill is %f\n",total_eb);
    return 0;
}*/
#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.50;
        printf()
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}

