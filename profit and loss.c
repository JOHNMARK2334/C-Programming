#include<stdio.h>
int main()
{
    float BP, SP, DIFF;
    printf("What is the buying price:");
    scanf("%f",&BP);
    printf("What is the selling price:");
    scanf("%f",&SP);
    DIFF=SP-BP;
    if(DIFF>0)
    {
        printf("Profit of %.2f\n",DIFF);

    }
    else
    {
        printf("Loss of %.2f\n",DIFF);

    }
   return 0;
}
