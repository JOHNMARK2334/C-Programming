#include<stdio.h>
int main()
{
    float maths, chemistry, physics, total;
    float average;

    printf("marks for maths:");
    scanf("%f",&maths);
    printf("marks for chemistry :");
    scanf("%f",&chemistry);
    printf("marks for physics :");
    scanf("%f",&physics);
    total=maths+chemistry+physics;
    printf("Sum: %.2f\n",total);

    average=total/3;
    printf("average: %.2f\n",average);
    if(average<40)
    {
        printf("Grade: E\n");
    }
else if(average>40)
{
    printf("Grade:D\n");

}
else if(average>50)
{
    printf("Grade:C\n");


}
else if(average>60)
{
    printf("Grade:B\n");
}
else if(average>70)
{
    printf("Grade:A\n");
}

return 0;
}
