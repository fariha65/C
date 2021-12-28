//Write a C program to calculate profit or loss.
#include<stdio.h>
int main()
{
    int capital,selling_price,amount;
    printf("Enter your capital:\n");
    scanf("%d",&capital);
    printf("Enter your selling_price:\n");
    scanf("%d",&selling_price);
    if(selling_price>capital)
    {
        amount=selling_price - capital;
        printf("profit=%d\n",amount);
    }
    else if(capital>selling_price)
    {
        amount = capital - selling_price;
        printf("loss=%d\n",amount);
    }
    else
        printf("no profit& no loss .");
    return 0;

}
/*/**
 * C program to calculate profit or loss
 */

/*#include <stdio.h>

int main()
{
    int cp,sp, amt; */

    /* Input cost price and selling price of a product */
    /*printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);*/

    /*if(sp > cp)
    {
        /* Calculate Profit */
       /* amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {*/
        /* Calculate Loss */
       /* amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        /* Neither profit nor loss */
        /*printf("No Profit No Loss.");
    }

    return 0;
}*/
