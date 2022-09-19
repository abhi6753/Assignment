#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,si;
    printf("Ennter principle ammount:\n");
    scanf("%f",&p);
    printf("Enter rate of intrest:\n");
    scanf("%f",&r);
    printf("Enter the duration:\n");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple Intrest = %.2f",si);
    //getch();
    return 0;
}