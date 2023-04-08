#include<stdio.h>
int main()
{
    float bs,gs;
    printf("enter your bas:");
    scanf("%f",&bs);
    if(bs<15,000)
    {
        gs=bs+(0.2*bs)+(0.5*bs);
        printf("gs:%.2f\n",gs);
    }

  return 0;
}
