// A program to calculate the sum of border elements of a square matrix.
#include <iostream.h>
void main()
{
	int a[10][10], i, j, sum=0, n,m;
	cout<<"Enter the dimensions of the matrix - \n";
	cout<<"Rows = ";
	cin>>n;
	cout<<"Columns = ";
	cin>>m;
	cout<<"\nEnter elements of matrix - ";
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
		{
			cin>>a[i][j];
			if (i==0 || i==n-1 || j==0 || j==m-1)
				sum+=a[i][j];
		}
	cout<<endl<<"Sum = "<<sum;
}

