#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,fact=1;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial of the no. is %d",fact);
getch();
}
