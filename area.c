#include<stdio.h>

int main()
#define PI 22/7
{
    float area,circumference;
    int radius;
    printf("enter your radius :");
    scanf("%d",&radius);

    area=PI*radius*radius;
    printf("area=%.2f\n",area);

    circumference=PI*radius*2;
    printf("circumference=%.2f\n",circumference);

    return 0;

}
