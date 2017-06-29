#include<conio.h>
#include<stdio.h>
void main()
{
int n,m,i,j,f=0;

scanf("%d%d",&n,&m);
for(i=n+1;i<m;i++)
{
for(j=2;j<=n/2;j++)
{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("%d",i);
}
f=0;
}
getch();
}


