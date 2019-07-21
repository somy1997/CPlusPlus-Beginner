//A program to calculate the sum of elements above and below the main diagonal of square matrix
#include <iostream.h>
void main()
{
	int a[10][10], i, j, sum1=0, sum2=0, n;
	cout<<"Enter order of the square matrix - ";
	cin>>n;
	cout<<"\nEnter elements - ";
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
		{
			cin>>a[i][j];
			if (i<j)
				sum1+=a[i][j];
			if (i>j)
				sum2+=a[i][j];
		}
	cout<<"\n\nSum of upper triangle = "<<sum1<<"\nSum of lower triangle = "<<sum2<<"\nTotal Sum = "<<sum1+sum2;
}


