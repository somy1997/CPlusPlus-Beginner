#include <iostream.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void binsearch(int a[], int first, int last, int x)
{
	int mid=(first+last)/2;
	if (x>a[mid])
		binsearch(a, mid+1, last, x);
	else if (x<a[mid])
		binsearch(a, first, mid-1, x);
	else
		cout<<"Found at "<<mid+1;
}
void main()
{
	int a[2000], i, n, x;
	cout<<"\nEnter number of elements - ";
	cin>>n;
	cout<<"\nEnter elements in ascending order with no duplication - "<<endl;
	for (i=0; i<n; i++)
		cin>>a[i];
	cout<<"\nEnter element for searching - ";
	cin>>x;
	binsearch(a, 0, n-1, x);
}



