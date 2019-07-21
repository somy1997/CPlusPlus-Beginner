#include <iostream.h>
#include <conio.h>

void main ()
{
start:
int patte[44][44],i,j,n,s1,s2;
cout<<"Enter order of square matrix - ";
cin>>n;
if(n>44)
	{
	cout<<"\n\nNOT ENOUGH MEMORY!!! Try Again!";
	getch();
	clrscr();
	goto start;
	}
cout<<"Enter elements - \n";
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		cin>>patte[i][j];
clrscr();
cout<<"Showing entered square matrix - \n";
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		cout<<patte[i][j]<<'\t';
	cout<<endl;
	}
s1=s2=0;
for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		{
		s1+=patte[i][j];
		s2+=patte[j][i];
		}
cout<<"Sum of elements above main diagnol = "<<s1<<endl<<"Sum of elements below main diagnol = "<<s2;
}
