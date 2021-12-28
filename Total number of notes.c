//1. Write a C program to count total number of notes in given amount.
#include<stdio.h>
int main()
{
    int amount;
    int notes1000,notes500,notes100,notes50,notes20,notes10,notes5,notes2,notes1;
    notes1000=notes500=notes100=notes50=notes20=notes10=notes5=notes2=notes1=0;
    printf("Enter the notes amount :");
    scanf("%d",&amount);
    if(amount>=1000)
    {
        notes1000=amount/1000;
        amount-=notes1000*1000;

    }
     if(amount>=500)
    {
        notes500=amount/500;
        amount-=notes500*500;

    }
     if(amount>=100)
    {
        notes100=amount/100;
        amount-=notes100*100;

    }
     if(amount>=50)
    {
        notes50=amount/50;
        amount-=notes50*50;

    }
     if(amount>=20)
    {
        notes20=amount/20;
        amount-=notes20*20;

    }
     if(amount>=10)
    {
       notes10= amount/10;
        amount-=notes10*10;

    }
     if(amount>=5)
    {
        notes5=amount/5;
        amount-=notes5*5;

    }
     if(amount>=2)
    {
        notes2=amount/2;
        amount-=notes2*2;

    }
     if(amount>=1)
    {
        notes1=amount;


    }
    printf("1000=%d\n",notes1000);
     printf("500=%d\n",notes500);
      printf("100=%d\n",notes100);
       printf("50=%d\n",notes50);
        printf("20=%d\n",notes20);
         printf("10=%d\n",notes10);
          printf("5=%d\n",notes5);
           printf("2=%d\n",notes2);
            printf("1=%d\n",notes1);
            return 0;







}
/*#include <stdio.h>

int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;

    /* Initialize all notes to 0 */
    //note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


    /* Input amount from user */
   /* printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    /* Print required notes */
    //printf("Total number of notes = \n");
   /* printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);

    return 0;
}*/
