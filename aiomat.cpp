//A program to input, display, add, substract and multiplay two matrices.
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
void addmat(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{
	if (r1==r2 && c1==c2)
	{
		int i,j, c[10][10];
		for (i=0; i<r1; i++)
			for (j=0; j<c1; j++)
				c[i][j]=a[i][j]+b[i][j];
		cout<<"\n\nResultant Matrix (SUM) : "<<endl;
		for (i=0; i<r1; i++)
			{
			cout<<endl;
			for (j=0; j<c1; j++)
				cout<<"  "<<c[i][j];
			}
		cout<<"\n\nPress [SPACE] for another operator.\nPress any other key for new Matrix...";
	}
	else
	{
		cout<<"\nMatrix can not be added. \n\nPress [SPACE] for another operator.\nPress any other key for new Matrix...";
	}
}
void submat(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{
	if (r1==r2 && c1==c2)
	{
		int i,j, c[10][10];
		for (i=0; i<r1; i++)
			for (j=0; j<c1; j++)
				c[i][j]=a[i][j]-b[i][j];
		cout<<"\n\nResultant Matrix (DIFFERENCE) : "<<endl;
		for (i=0; i<r1; i++)
			{
			cout<<endl;
			for (j=0; j<c1; j++)
				cout<<"  "<<c[i][j];
			}
		cout<<"\n\nPress [SPACE] for another operator.\nPress any other key for new Matrix...";
	}
	else
	{
		cout<<"\nMatrix can not be substracted. \n\nPress [SPACE] for another operator.\nPress any other key for new Matrix...";
	}
}

void multimat(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{
	if (r2==c1)
	{
		int i,j,k, c[10][10];
		for (i=0; i<r1; i++)
			for (j=0; j<c2; j++)
				{
				c[i][j]=0;
				for (k=0; k<r2; k++)
					c[i][j]=c[i][j]+a[j][k]*b[k][i];
				}
		cout<<"\n\nResultant Matrix (PRODUCT) : "<<endl;
		for (i=0; i<r1; i++)
			{
			cout<<endl;
			for (j=0; j<c2; j++)
				cout<<"  "<<c[i][j];
			}
		cout<<"\n\nPress [SPACE] for another operator.\nPress any other key for new Matrix...";
	}
	else
	{
		cout<<"\nMatrix can not be multiplied. \n\nPress [SPACE] for another operator.\nPress any other key for new Matrix...";
	}
}
void main()
{
	xD:
	clrscr();
	int a[10][10], b[10][10], r1, c1, r2, c2, i, j;
	char ch;
	cout<<"Enter number of rows of first matrix : ";
	cin>>r1;
	cout<<"\nEnter number of columns of first matrix : ";
	cin>>c1;
	cout<<"\n\nInput elements of First Matrix  : "<<endl;
	for (i=0; i<r1; i++)
		for (j=0; j<c1; j++)
		{
			cout<<"Row :"<<i+1<<" Column :"<<j+1<<" = ";
			cin>>a[i][j];
		}
	cout<<"\n\nEnter number of rows of Second Matrix : ";
	cin>>r2;
	cout<<"\nEnter number of columns of Second Matrix : ";
	cin>>c2;
	cout<<"\n\nInput elements of Second Matrix  : "<<endl;
	for (i=0; i<r2; i++)
		for (j=0; j<c2; j++)
		{
			cout<<"Row :"<<i+1<<" Column :"<<j+1<<" = ";
			cin>>b[i][j];
		}
	a:
	clrscr();
	cout<<"\nFirst Matrix : "<<endl;
	for (i=0; i<r1; i++)
	{
		cout<<endl;
		for (j=0; j<c1; j++)
			cout<<"  "<<a[i][j];
	}
	cout<<"\n\nSecond Matrix : "<<endl;
	for (i=0; i<r2; i++)
	{
		cout<<endl;
		for (j=0; j<c2; j++)
			cout<<"  "<<b[i][j];
	}
	cout<<"\n\nInput operation to be performed ( + )( - )( x ) : ";
	ch=getch();
	switch(ch)
	{
		case '+':
		{
			addmat(a, b, r1, c1, r2, c2);
			if (getch()==' ')
				goto a;
			else
				goto xD;
		}
		case '-':
		{
			submat(a, b, r1, c1, r2, c2);
			if (getch()==' ')
				goto a;
			else
				goto xD;
		}
		case 'x':
		{
			multimat(a, b, r1, c1, r2, c2);
			if (getch()==' ')
				goto a;
			else
				goto xD;
		}
		default:
		{
			cout<<"\nInvalid Operator. Press any key to try again... ";
		if (getch())
			goto a;
		}
	}
}
