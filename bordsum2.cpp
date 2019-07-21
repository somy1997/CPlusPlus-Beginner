#include <iostream.h>
#include <conio.h>

void main ()
{
start:
int patte[44][44],i,j,m,n,s1,s2;
cout<<"Enter order of matrix m and n respectively - \n";
cin>>m>>n;
if(m*n>2000)
	{
	cout<<"\n\nNOT ENOUGH MEMORY!!! Try Again!";
	getch();
	clrscr();
	goto start;
	}
cout<<"Enter elements - \n";
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		cin>>patte[i][j];
clrscr();
cout<<"Showing entered matrix - \n";
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		cout<<patte[i][j]<<'\t';
	cout<<endl;
	}
s1=s2=0;
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		{
		s1+=patte[i][j];
		}
for(i=1;i<(m-1);i++)
	for(j=1;j<(n-1);j++)
		{
		s2+=patte[i][j];
		}
cout<<"Sum of border = "<<s1-s2;
}
