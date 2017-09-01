#include<stdio.h>
#include<conio.h>
void main()
{
int a[100];
int i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(i==a[i])
{
printf("\nthe number %d equals its index %d",a[i],i);
}}
getch();
}
