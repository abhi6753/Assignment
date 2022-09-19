#include<stdio.h>
#include<conio.h>
int main()
{
    float l,w,h,v;
    printf("Enter length,width and height of cuboid:\n");
    scanf("%f%f%f",&l,&w,&h);
    v=l*w*h;
    printf("Volume of cuboid = %.2f",v);
    getch();
    return 0;
}