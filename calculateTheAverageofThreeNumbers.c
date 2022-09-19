#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,avg;
    printf("Enter three number:\n");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average of 3 numbers:%.2f",avg);
    getch();
    return 0;
}