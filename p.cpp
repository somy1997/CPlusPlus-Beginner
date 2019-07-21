#include <iostream.h>
#include <conio.h>

void display(int a[],int n)
{
for (int i=0;i<n;i++)
	cout<<a[i]<<'\t';
cout<<'\n';
}
void displayrev(int a[],int n)
{
for (int i=n-1;i>=0;i--)
	cout<<a[i]<<'\t';
cout<<'\n';
}

void seqsort(int a[],int n,int ctr=1)
{
int i,j;
for(i=0;i<=(n-2);i++)
	for(j=i+1;j<=(n-1);j++)
		{
		if(a[i]>a[j])
			{a[j]=a[i]+a[j];
			 a[i]=a[j]-a[i];
			 a[j]=a[j]-a[i];
			}
		if(ctr==2)
			{
			displayrev(a,n);
			continue;
			}
		display(a,n);
		}
}


void main()
{  start:
	int a[2000], ch, n,i;
	cout<<"\nEnter number of elements - ";
	cin>>n;
	cout<<"\nEnter elements of array - "<<endl;
	for (i=0; i<n; i++)
		cin>>a[i];
	cout<<"Enter '1' for ascending or '2' for descending - \n";
	ch=getch();
	switch(ch)
	{
	case '1':cout<<"Sorting array in ascending order :\n";
				seqsort(a,n);
				cout<<"Final sorted array :\n";
				display(a,n);
				break;
	case '2':cout<<"Sorting array in descending order :\n";
				seqsort(a,n,2);
				cout<<"Final sorted array :\n";
				displayrev(a,n);
				break;
	default :cout<<"WRONG CHARACTER!!! Try again.";
				goto start;

}
}



