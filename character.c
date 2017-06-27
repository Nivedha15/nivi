#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
scanf("%c",&a);
if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
{
printf("%c is an alphabet",a);
}
else
{
printf("%c is not an alphabet",c);
}
getch();
}
