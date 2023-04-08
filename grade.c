#include<stdio.h>
int main()
{
    float maths,chemistry,physics;
    float sum,average;
    printf("enter marks for maths:");
    scanf("%f",&maths);
    printf("enter marks for chemistry:");
    scanf("%f",&chemistry);
    printf("enter marks for physics :");
    scanf("%f",&physics);
    sum=maths+chemistry+physics;
    printf("Total: %.2f\n",sum);
    average=sum/3;
    printf("average: %.2f\n",average);

    if(average<40)
    {
        printf("Grade :E\n");
    }
    else if(average<50)
    {
        printf("Grade:D\n");

    }
    else if(average<60)
    {
        printf("Grade:C\n");
    }
    else if(average<70)
    {
        printf("Grade :B\n");
    }
    else
    {
        printf("Grade:A\n");
    }
    return 0;
}
