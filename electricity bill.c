//pgm to build electricity bill
#include<stdio.h>
main()
{
int Id,units_consumed;
float amount_charge,surcharge_amount,net_amount;
char name;
printf("Enter Id number:");
scanf("%d",&Id);
printf("Customer Id No.:%d\n",Id);

printf("Enter customer name:");
scanf(" %c",&name);
printf("Customer name:%c\n",name);

printf("Enter units consumed:");
scanf("%d",&units_consumed);
printf("Units consumed:%d\n",units_consumed);
if (units_consumed<199)
{
amount_charge=1.2*units_consumed;
printf("Amount charges @Rs.1.2 per unit:%f\n",amount_charge);
}
else if (units_consumed>=200&&units_consumed<400)
{
    amount_charge=1.5*units_consumed;
    printf("Amount charge @Rs1.5 per unit :%f\n",amount_charge);
}
else if (units_consumed>=400&&units_consumed<600)
{
    amount_charge=1.8*units_consumed;
    printf("Amount charge @Rs1.8 per unit :%f\n",amount_charge);
}
else if (units_consumed>=600)
{
    amount_charge=2*units_consumed;
    printf("Amount charge @Rs2 per unit :%f\n",amount_charge);
}
else
    {
        printf("enter valid value");
    }
    if (amount_charge>400)
    {
        surcharge_amount=0.15*amount_charge;
        printf("Surcharge amount:%f\n",surcharge_amount);
    }
    net_amount=amount_charge+surcharge_amount;
    printf("Net amount paid by the customer=%f",net_amount);
}
