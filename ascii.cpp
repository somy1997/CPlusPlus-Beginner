#include<iostream.h>
#include<conio.h>
main()
{
char ch=0;
while(ch<=255)
	{
	cout<<int(ch)<<"-"<<ch<<",\t";
	ch++;
		if(ch%10==0)
		{
		cout<<"\nPress any key to continue";
		getch();
		cout<<endl;
		}
	}
return 0;
}
