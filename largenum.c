#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("%d is the greatest",a);
else
printf("%d is the greatest",c);
}
else
{
if(b>c)
printf("%d is the greatest",b);
else
printf("%d is the greatest",c);
}
getch();
}
