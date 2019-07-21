#include <iostream.h>
#include <dos.h>
#include <stdio.h>
int main()
{
		date datep;
		char td[3];
		short unsigned int i,n;
		datein:
		cout<<"\nEnter Date : ";
		gets(td);
		n=0;
		for(i=0;td[i]!='\0';i++)
			n=n*10+td[i]-48;
		if(n>=1&&n<=31)
			datep.da_day=n;
		else
			goto datein;
		cout<<"\nEnter Month : ";
		gets(td);
		n=0;
		for(i=0;td[i]!='\0';i++)
			n=n*10+td[i]-48;
		if(n>=1&&n<=12)
			datep.da_mon=n;
		else
			goto datein;
		cout<<"\nEnter Year : ";
		cin>>n;
		if(n>=0&&n<=2012)
			datep.da_year=n;
		else
			goto datein;
		printf("\nDate of Birth: %02d/%02d/%04d\n", datep.da_day, datep.da_mon, datep.da_year);

	}
