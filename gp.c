#include<stdio.h>
int main()
{
    int counter,terms=3;
    int sum=0,Nterms;
    printf("How many terms :");
    scanf("%d",&Nterms);
    for(counter=1;counter<=Nterms;counter++)
    {
        printf("%d\t",terms);
        sum+=terms;
        terms=terms*3;

    }
    printf("\n sum=%d\n",sum);
    return 0;
}
