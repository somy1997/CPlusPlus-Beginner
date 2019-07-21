#include <iostream.h>
	void main()
	{
	char a[100], b[100];
	cout<<"Sentense - ";
	cin.getline(a, 100);
	cout<<"\nWord - ";
	cin.getline(b, 100);
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
	cout<<"\n\nThe word '"<<b<<"' was repeated "<<ctr<<" times.";
	}

