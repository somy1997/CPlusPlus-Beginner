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
int n;
cout<<"Enter any number - ";
cin>>n;
if (armstrong(n))
	cout<<"\nThe entered number is an armstrong number.";
else
	cout<<"\nThe entered number is not an armstrong number.";
getch();
}
}
