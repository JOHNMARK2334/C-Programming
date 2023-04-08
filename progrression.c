//GP
#include<stdio.h>
int main()
{
 int sum=0,terms=2;
 int noterms,counter;
 printf("How many terms: ");
 scanf("%d",&noterms);
 for(counter=1;counter<=noterms;counter++)
 {
     sum+=terms;
     printf("%d\t",terms);
     terms*=3;
 }
 printf("\n sum=%d\n",sum);
 return 0;
}
