#include <iostream.h>
#include <conio.h>
void main()
{
for(int j=1; ;j=j)
{
clrscr();
float n,a=0,b=1,c;
cout<<"Enter the number of terms you want in the series - ";
cin>>n;
cout<<"Fibonacii series:\n";
for(int x=1,i=1;i<=n;i++,x++)
{
c=a+b;
cout<<a<<",\t";
a=b;b=c;
if(x%5==0)
	{x=1;cout<<"\n";}
}
getch();
}
}
