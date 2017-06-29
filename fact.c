#include<stdio.h>
#include<math.h>
int main()
{
int n,fact=1,i;
scanf("%d",&n);
for(i=n;n>=1;n--)
{
fact=fact*n;
}
printf("%d",fact);
return 0;
}
