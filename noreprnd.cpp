#include<iostream.h>
#include<stdlib.h>

void main()
{	randomize();
	int a[2000], ctr,i=0,n;
	while (i<2000)
		{
		do
		{
		a[i]=random(2000)+1;
		for (ctr=0; ctr<i; ctr++)
			if (a[i]==a[ctr])
				break;
		}
		while(ctr<i);
		cout<<a[i]<<"\t";
		i++;
		}
}