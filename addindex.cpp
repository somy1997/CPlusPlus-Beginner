// A program to insert an element in an array
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
int a[100], pos, x, n, i;
xD:
clrscr();
cout<<"Enter size of array (max 100) : ";
cin>>n;
cout<<"\nEnter elements of array : "<<endl;
for (i=0; i<n; i++)
	cin>>a[i];
cout<<"\nEnter index of element to be inserted : ";
cin>>pos;
cout<<"\nEnter element to be inserted : ";
cin>>x;
a[n+1]=NULL;
for (i=n; i>pos; i--)
	a[i]=a[i-1];
a[pos]=x;
n++;
cout<<"\nRequired Array : "<<endl;
for (i=0; i<n; i++)
	cout<<a[i]<<"  ";
cout<<"\n\nPress any key to continue . . . ";
getch();
goto xD;
}
