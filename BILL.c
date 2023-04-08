//CIT-227-008\2021
//WANJUGU JOHNMARK NDUNG'U
#include<stdio.h>
int main()
{
    int bill=0;
    int units;
    int subtotal1;
    int fstUnitsAbovehundred;
    int unitsAboveFirstFifty;
    int unitsAboveTwoHundred;
    int unitsAboveTwoFifty;
    printf("Enter amount of units consumed?\n");
    scanf("%d",&units);
    if(units<=100)
    {
        bill=200;
        printf("Bill :Ksh.%d\n",bill);

    }
    else if(100<units&&units<=150)
    {
        units=(units-100);
        printf("%d\n",units);
        subtotal1=(units*25);
        bill=subtotal1+200;
        printf("Bill:Ksh.%d\n",bill);

    }
    else if(150<units&&units<=200)
    {
        fstUnitsAbovehundred=(50*25);
        unitsAboveFirstFifty=((units-150)*20);
        bill=fstUnitsAbovehundred+unitsAboveFirstFifty+200;
        printf("Bill:Ksh.%d\n",bill);
    }
    else if(200<units&&units<=250)
    {
        fstUnitsAbovehundred=(50*25);
        unitsAboveFirstFifty=(50*20);
        unitsAboveTwoHundred=((units-200)*15);
        bill=fstUnitsAbovehundred+unitsAboveFirstFifty+unitsAboveTwoHundred+200;
        printf("Bill:Ksh.%d\n",bill);
    }
    else
    {
        fstUnitsAbovehundred=(50*25);
        unitsAboveFirstFifty=(50*20);
        unitsAboveTwoHundred=(50*15);
        unitsAboveTwoFifty=((units-250)*10);
        bill=fstUnitsAbovehundred+unitsAboveFirstFifty+unitsAboveTwoHundred+unitsAboveTwoFifty+200;
        printf("Bill:Ksh.%d\n",bill);
    }
    return 0;
}
