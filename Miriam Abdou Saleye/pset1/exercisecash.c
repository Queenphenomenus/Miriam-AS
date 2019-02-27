#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int n;
    int a=500;
    int b=250;
    int c=200;
    int d=100;
    int e=50;
    int f=25;
    int g=10;
    int h=5;
    do
    {
        n=get_int("give the price: ");
    }
    while(n<=0);
    int counter=0;

    while(n>=a)
    {
        n=n-a;
        counter++;
        printf("%i\n",a);
    }
    while(n>=b)
    {
    n=n-b;counter++;printf("%i\n", b);
    }
    while(n>=c)
    {
        n=n-c;counter++;printf("%i\n", c);
    }
    while(n>=d)
    {
       n=n-d;counter++;printf("%i\n", d);
    }
    while(n>=e)
    {
        n=n-e;counter++;printf("%i\n", e);
    }
    while(n>=f)
    {
        n=n-f;counter++;printf("%i\n", f);
    }
    while(n>=g)
    {
        n=n-g;counter++;printf("%i\n", g);
    }
    while(n>=h)
    {
        n=n-h;counter++;printf("%i\n", h);
    }
    printf("%i coins \n", counter);
    {
        printf("this card is an Amex card");
    }
    else if((thecard>50 && the card<56)&&(count==16))
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