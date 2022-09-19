#include<stdio.h>
#include<conio.h>
int main()
{
    float a,sq;
    printf("Enter the number:\n");
    scanf("%f",&a);
    sq=a*a;
    printf("Square of %.2f is %.2f",a,sq);
    getch();
    return 0;
}