#include<conio.h>
#include<stdio.h>
void main()
{
long long n;
int rev=0,temp,count=0,rem;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
temp=temp/10;
++count;
}
tem=n;
while(temp!=0)
{
rem=temp%10;
rev=rev+pow(rem,count);
temp=temp/10;
}
if(n==rev)
{
printf("amstrong number");
}
else
{
printf("not an amstrong number");
}
getch();
}
