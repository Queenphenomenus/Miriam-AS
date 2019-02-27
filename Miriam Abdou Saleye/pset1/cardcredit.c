#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long number;
    int count=0
    do
    {
        code=get long long("your number card, please");
    }
    while(number<0);
    int number=0;
    long long digit1=code;
    while (digitt1>0)
    {
        digit1=digit1/10;
        count++;
    }
    // verifier la condition pour chaque credit card
    if(count!=13 && count!=15 && count!=16)
    {
    printf("the credit card is not valid\n");
    }
    // doit commencer par le dernier numero
    digit1=number;
    int sum=0;
    for (int i=1; i<count;i++)
    {
        int digit=digit1%10;
        // pour les places paires
        if(i%2==0)
        {
            //multiply the number by 2
            digit=digit*2;
        }
        //when is an odd position
        if(i%2!==0)
        {
            //not multiplyand pass
            digit=digit*1;
        }
        //after 9like a number
        if (digit>9)
        {
            digit=digit-9;
        }
        //do the sum to all
        sum=sum+digit;
        //divide the number by 10 to make it mmoving
        digit1=digit/10;
        }
        if(sum%10!=0)
        {
            printf("your credit card is not valid");
        }
        else
        {
            printf("your credit card is valid");
        }
        digit1=number;
        while (digit1>100)
        {
            digit1=digit1/10
        }
        int thecard=digit1;
        if((the card==34||the card==37)&&(count==55))
        {
        printf("this card is an Amex card");
    }
    else if ((thecard>50) && (thecard<56)&&(count==16))
    {
        printf("this card is master card");
    }
    else if ((thecard/10==4)&&(count==13||count==16))
    {
        printf("this card is a visa card");
    }
    else
    {
        printf("your card name from another bank\n");
    }
}