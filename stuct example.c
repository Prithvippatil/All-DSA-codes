#include<stdio.h>
#include<string>
struct student
{
    int id;
    char name[20];
    float per;
};

void func(struct student record);

int main()
{
    struct student record;
    record.id=1;
    strcp(record name,"Raju");
    record per=86.5;
    func(record);
    return 0;
}

void func(struct student record)
