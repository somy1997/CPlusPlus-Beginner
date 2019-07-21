#include <iostream.h>
int rep(char a[100], char b[100])
	{
	int wl=0, ctr=0;
	for (int i=0; b[i]!='\0'; i++)
		wl++;
	for (int j=0; a[j]!='\0'; j++)
		for (int k=0; k<=wl; k++)
		{
		if (a[j]==b[0])
			if (a[j+k]==b[k])
			ctr++;
		}
	ctr=ctr/wl;
	return ctr;
	}
void main()
	{
	char x[100], y[100];
	cout<<"Sentense - ";
	cin.getline(x, 100);
	cout<<"\nWord - ";
	cin.getline(y, 100);
	cout<<cout<<"\n\nThe word '"<<y<<"' was repeated "<<rep(x,y)<<" times.";
	}

