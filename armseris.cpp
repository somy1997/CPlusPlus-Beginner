#include <iostream.h>
#include <conio.h>
int armstrong(int n)
{
int i=n,sum=0,r;
while (n)
	{
	r=n%10;
	sum=sum+r*r*r;
	n=n/10;
	}
if (sum==i)
	return 1;
else
	return 0;
}
void main()
{
for(int i=1; ;i=i)
{
clrscr();
float n,j,ctr;int a=1;
cout<<"Enter the number of terms to be printed in the series - ";
cin>>n;
ctr=j=1;
while(j<=n)
	{
	if (armstrong(ctr))
		{
		cout<<ctr<<",\t";
		if(a%5==0)
			{cout<<endl;a=0;}
		a++;j++;
		}
	ctr++;
	}
getch();
}
}
