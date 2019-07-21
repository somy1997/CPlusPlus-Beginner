// A program to fill the given 1D array into 2D array a[4]={2,7,3,9,4}
#include <iostream.h>
void display(int a[5][5])
	{
	int i, j;
	for (i=0; i<5; i++)
		{
		cout<<endl;
		for (j=0; j<5; j++)
			cout<<a[i][j]<<"  ";
		}
	}
void main()
	{
	int a[5]={2,7,3,9,4}, i, j, mat[5][5];
	for (i=0; i<5; i++)
		{
		for (j=0; j<5; j++)
			{
			mat[i][j]=a[4-j];
			if (j>i)
				mat[i][j]=0;
			}
		}
	display(mat);
	}



