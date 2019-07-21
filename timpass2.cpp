#include <iostream.h>
void main()
{
double i,m,n,x=0,sum,j;
cin>>m;
for(n=1;n<=m;n++)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
sum=i*i*i+j*j*j;
if(sum==n)
	x++;
}
if(x>0)
	cout<<endl<<n;
}
}