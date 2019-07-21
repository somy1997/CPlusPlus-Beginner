#include <iostream.h>
#include <conio.h>
int GCD(int x,int y)
{
for(int j,i=1;i<=x;i++)
	if(x%i==0 && y%i==0)
		j=i;
return j;
}
void main()
{
for(int i=1; ;i=i)
{
clrscr();
int a,b,x,y;
cout<<"Enter any two natural numbers whose GCD has to be calculated - \n";
cin>>a>>b;
if(a<b)
	{x=a;y=b;}
else
	{x=b;y=a;}
cout<<"\nGCD = "<<GCD(x,y);
getch();
}
}
