#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
    float r,areaofcircle;
    printf("Enter the value of radius:\n");
    scanf("%f",&r);
    areaofcircle = PI*r*r;
    printf("Area of circle:%.2f",areaofcircle);
    getch();
    return 0;
}