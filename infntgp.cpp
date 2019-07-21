#include <iostream.h>
#include <conio.h>
void main()
{
int i=0;char ch;double n=1,sum=0;
while(n)
{
n=n/2;
sum=sum+n;
cout<<sum-n<<" + "<<n<<" = "<<sum<<endl;
i++;
if(i%20==0)
	{
	cout<<"Press any key if you wish to continue.\nTo clear screen - Press 'Y' or 'y'-\n";
	ch=getch();
	if(ch=='y'||ch=='Y')
		clrscr();
	i=0;
	}
}
}