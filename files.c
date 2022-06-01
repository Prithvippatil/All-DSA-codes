//pgm question 5
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void write(FILE *p);
void read(FILE *p);
main()
{
FILE *p;
write(p);
read(p);
diplay(p);
}
void write(FILE*p)
{
char name[20];
char nation[20];
int odi_rank,n;
float avg;
p=fopen("player.txt","w");
printf("Enter number of students:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
  printf("Enter player name,nationality,ODI rank and avg runs:");
  fscanf(p,"%s%s%d%f",name,nation,&odi_rank,&avg);
}
fclose(p);
}
void read(FILE *p)
{
    p=fopen("player.txt","r");
fprintf("%s\t%s\t%d\t%f\t",name,nation,odi_rank,avg);
fclose(p);
}


