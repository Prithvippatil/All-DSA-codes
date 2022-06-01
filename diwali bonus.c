//pgm to find bonus on diwali
#include<stdio.h>
main()
{
char s;
int salary;
float bonus,additional_bonus,net_bonus;
printf("enter the gender of the person:");
scanf("%c",&s);
if (s==109)
{
    printf("gender is male\n");
    printf("Enter the salary of person:");
scanf("%d",&salary);
bonus=0.05*salary;
printf("Bonus of worker is:%f\n",bonus);
if (salary<=10000)
{
    additional_bonus=0.21*salary;
    net_bonus=bonus+additional_bonus;
    printf("net bonus of worker is:%f\n",net_bonus);
}
}
else if (s==102)
{
    printf("gender is female\n");
     printf("Enter the salary of person:");
scanf("%d",&salary);
bonus=0.1*salary;
printf("Bonus of worker is:%f\n",bonus);
if (salary<=10000)
{
    additional_bonus=0.21*salary;
    net_bonus=bonus+additional_bonus;
    printf("net bonus of worker is:%f\n",net_bonus);
}
}

}

