#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100];
int i,j,n,k=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
b[k]=a[i];
++k;
break;
}
}
}
getch();
}
