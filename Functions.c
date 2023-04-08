//A function that returns the sum of 3 numbers

#include<stdio.h>
int sum(int A,int B,int C);//Function prototype
int main()
{
    int Num1=30,Num2=55,Num3=45;
    int Total;
    Total=sum(Num1,Num2,Num3);
    printf("TheTotal is %d\n",Total);
    return 0;
}
int sum(int A,int B,int C)
{
    return A+B+C;
}
