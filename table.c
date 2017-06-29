#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        c=i*n;
        printf("\n%d*%d=%d",i,n,c);
    }
}
