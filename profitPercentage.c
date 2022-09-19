#include<stdio.h>
#include<conio.h>
int main()
{
    float cp,sp,profit,loss, profit_per,loss_per;
    printf("Enter cost price:\n");
    scanf("%f",&cp);
    printf("Enter selling price:\n");
    scanf("%f",&sp);
    if(sp>cp)
    {
       profit=sp-cp;
       printf("Profit = %.2f\n",profit);
       profit_per = (profit*100)/cp;
       printf("Profit percentage = %.2f %%",profit_per);
    }
    else
    {
      loss = cp-sp;
      printf("Loss = %.2f\n",loss);
      loss_per=(loss*100)/cp;
      printf("Loss percentage = %.2f %%",loss_per);
    }
    getch();
    return 0;
}