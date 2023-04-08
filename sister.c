#include<stdio.h>
int main()
{
    int counter,k;
    printf("Enter the number: ");
    scanf("%d",&k);
    for(counter=1;counter<=25;counter++)
    {
        printf("%d x %d=%d\n",counter,k,counter*k);
    }
    return 0;
}
