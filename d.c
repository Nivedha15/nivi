#include<conio.h>
#include<stdio.h>
void main()
{
long long count=0,n,temp;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
temp=temp/10;
++count;
}
printf("%d",count);
getch();
}
