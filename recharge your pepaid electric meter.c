/*Suppose you have purchased a Scratch Card of 1000 Taka to recharge your Prepaid Electric meter. The
card contains a hidden code of 6 digits. If the code is both Palindrome and even number then, you will
get 25% extra bonus and if the code makes only a palindrome not even number then, you will get 10%
extra bonus. But if it doesn’t make a palindrome then you will get only 5% extra bonus. Now write a Cprogram to check which bonus
 will you get according your secret number from the Scratch Card.*/
 #include<stdio.h>
int main()
{
    int code, temp, i;
    printf("Enter the Hidden code: ");
    scanf("%d", &code);
    temp=code;

    int reverse=0, reminder;
    while(code!=0)
    {
        reminder=code%10;
        reverse=reverse*10+reminder;
        code/=10;
    }
    if(reverse==temp)
    {
        if(temp%2==0)
            printf("Congratulation! You have got 25%% instant Bonous.\nYour Balance is : %.2f",(1000 + 1000*0.25));
        else
            printf("Congratulation! You have got 10%% instant Bonous. \nYour Balance is : %.2f",1000 + 1000*0.10);
    }
    else
        printf("Unfortunately you have got only 5%% instant bonous.\nYour Balance is : %.2f",1000 + 1000*0.05);
}

