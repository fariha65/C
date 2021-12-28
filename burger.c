/*Using Switch statement, write a program that displays the following menu for
the food items available to take order from the customer:
•B=Burger
•F=FrenchFries
•P=Pizza
•S=Sandwiches*/
#include <stdio.h>

int main()

{

   char ch;
   printf("the food items available to take order :\n");
   printf("B=Burger\n");
   printf("F=FrenchFries\n");
   printf("S=Sandwiches\n");
   printf("P=Pizza\n");




 printf("Enter your choice:");
   scanf("%c",&ch);

   switch(ch) {

   case 'B': printf("Burger");

                  break;

   case 'F': printf("French Fries");

                  break;

   case 'S': printf("Sandwich");

                  break;

   case 'P': printf("Pizza");

}

   return 0;

}
