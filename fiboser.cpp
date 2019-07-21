#include <iostream.h>
#include <conio.h>
void fibo(float n)
{
float a=0,b=1,c;
	for(int x=1,i=1;i<=n;i++,x++)
	{
	c=a+b;
	cout<<a<<",\t";
	a=b;b=c;
		if(x%5==0)
		{
		x=0;cout<<"\n";}
		}
	}
void main()
{
for(int j=1; ;j=j)
{
clrscr();
float n;
cout<<"Enter the number of terms you want in the series - ";
cin>>n;
cout<<"Fibonacii series:\n";
fibo(n);
getch();
}
}
