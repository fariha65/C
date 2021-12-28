/*#include<stdio.h>
int main()
{
    int a=21,c;
    c=a+1;
    a=a++;
    printf("%d\n",c);
    c=a-1;
    a=a--;
    printf("%d\n",c);
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    int n=25,a=21,c;
    while(a<=n)
    {
        c=a;
        printf("%d\n",c);
        a++;
    }

    return 0;

}*/
/*One day Three best friends Petya, Vasya and Tonya decided to form a team and take part in programing contests . Participants are usually offered several problems during programing contests . Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution . Otherwise, the friends won’t write the problem’s solution .
The contest offers n problems to the participants .For each problem we know, which friend is sure  about the solution . Help the friends find the number of problems for which They will write a solution.
Input
The first input line contains a single integer n(1 ≤ n ≤1000) the number of problems in the contest . Then n lines contain three integers each , each integer is either 0 or 1. If the first number in the line equals 1 , then Petya is sure about the  problem’s solution ,otherwise he isn’t sure . the second number shows Vasya's view on the solution , the third number shows tonya’s view . The numbers on the lines are separated  by spaces .
Output
Print a single integer the number of problems the friends will implement on the contest .
Examples
3
1 1 0
1 1 1
1 0 0
Output
2
Note
In the first sample petya and vasya are sure that they know how to solve the first problem and all three of them know how to solve the second problem .That means
 that they will write solutions for these problems . Only Petya  is sure about the solution for the third problem , but that isn’t enough , so the friends
  won’t take it.*/
/*#include<stdio.h>
int main ()
{
    int n,a,b,d,c=0,s=0;
    scanf ("%d",&n);
    while(n>0)
    {
        scanf ("%d %d %d ",&a,&b,&d);
        if(a==1) c++;
        if(b==1) c++;
        if(d==1) c++;

        if (c>=2) s++;
           c=0;
           n--;

    }
    printf("%d\n",s);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int num_of_ques, petya, vasya, tonya, count=0, ques=1;
    printf("Enter the number of questions: ");
    scanf("%d",&num_of_ques);

    while(num_of_ques>0)
    {
        printf("Question no : %d\n",ques);
        printf("Petya : ");
        scanf("%d",&petya);
        printf("Vasya : ");
        scanf("%d",&vasya);
        printf("Tonya : ");
        scanf("%d",&tonya);

        if((petya == 1 && vasya==1) || (petya==1 && tonya==1) || (vasya==1 && tonya==1))
        {
            count++;
        }

        num_of_ques--;
        ques++;
        printf("\n");
    }
    if(count>0)
    {
        printf("\nYou have successfully solves %d Questions.",count);
    }
    else
        printf("\nSorry! you can not even solve a single Question!");

}



