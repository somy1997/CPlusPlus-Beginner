// A program to remove an element from an array
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
int a[100], x, n, i;
xD:
clrscr();
cout<<"Enter size of array (max 100) : ";
cin>>n;
cout<<"\nEnter elements of array : "<<endl;
for (i=0; i<n; i++)
	cin>>a[i];
cout<<"\nEnter index of element to be removed : ";
cin>>x;
for (i=x; i<n; i++)
	a[i]=a[i+1];
n--;
cout<<"\nRequired Array : "<<endl;
for (i=0; i<n; i++)
	cout<<a[i]<<"  ";
cout<<"\n\nPress any key to continue . . . ";
getch();
goto xD;
}
