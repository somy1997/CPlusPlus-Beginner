// A program to find the sum of squares of elements along diagonals of a square matrix.
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
	xD:
	clrscr();
	int a[10][10], n, i, j, sum1=0, sum2=0;
	cout<<"Enter the order of square matrix (Max 10) : ";
	cin>>n;
	cout<<"\nEnter elements of the matrix : ";
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			cin>>a[i][j];
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			{
			if (i==j)
				sum1+=(a[i][j]*a[i][j]);
			if (i+j==n-1)
				sum2+=(a[i][j]*a[i][j]);
			}
	if (n%2==0)
		{
		cout<<"\nSum of squares of elements on diagonals of matrix = "<<sum1+sum2<<"\nPress any key to continue...";
		if (getch())
			goto xD;
		}
	else
		{
		cout<<"\nSum of squares of elements on diagonals of matrix = "<<sum1+sum2-(a[n/2+1][n/2+1]*a[n/2+1][n/2+1])<<"\nPress any key to continue...";
		if (getch())
			goto xD;
		}
}







