#include<stdio.h>
#include<conio.h>
int main()
{
    float l,b,area;
    printf("Enter length and breadth:\n");
    scanf("%f %f",&l,&b);
    area = l*b;
    printf("Area of rectangle = %.2f",area);
    getch();
    return 0;
}