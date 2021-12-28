/*4. Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/
#include<stdio.h>
int main()
{
    int phy,chem,bio,math,com;
    float per;
    printf("Enter phy ,chem,bio,math,com :\n");
    scanf ("%d %d %d %d %d",&phy,&chem,&bio,&math,&com);
    per =(phy+chem+bio+math+com)/5;
    if(per>=90)
    {
        printf("per=%f\nGrade A",per);

    }
     else if(per>=80)
    {
        printf("per=%f\nGrade B",per);

    }
     else if(per>=70)
    {
        printf("per=%f\nGrade C,per");

    }
    else  if(per>=60)
    {
        printf("per=%f\nGrade D",per);

    }
    else  if(per>=40)
    {
        printf("per=%f\nGrade E",per);

    }
     else
     {

     (per<40);

        printf("per=%f\nGrade F",per);

    }
    return 0;
}
