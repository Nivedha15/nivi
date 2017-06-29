#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
int rev=0,temp,count=0,rem,i;
scanf("%d%d",&a,&b);

for(i=a+1;i<b;i++)
{
temp=i;
while(temp!=0)
{
temp=temp/10;
++count;
}
temp=i;
while(temp!=0)
{
rem=temp%10;
rev=rev+pow(rem,count);
temp=temp/10;
}
if(i==rev)
{
printf("%d",i);
}
count=0;rev=0;
}
return 0;
}
