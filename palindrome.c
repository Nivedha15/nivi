#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,temp,rem;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(n==rev)

{
printf("palindrome");
}
else
{
printf("not  a palindrome);
}
getch();
}


