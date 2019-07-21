#include <iostream.h>
void main()
{
int m1,m2,m3,m4,m5,total;
char ctr=0;
float per;
cout<<"Enter marks in all 5 subjects individually - \n";
cin>>m1>>m2>>m3>>m4>>m5;
total=m1+m2+m3+m4+m5;
per=total/5.0;
if(m1<33)
	ctr++;
if(m2<33)
	ctr++;
if(m3<33)
	ctr++;
if(m4<33)
	ctr++;
if(m5<33)
	ctr++;
if(ctr>1)
	cout<<"fail";
	else
	if(ctr==1)
		cout<<"compartment";
		else
{
cout<<"\nCongrats!!!You have passed with - ";
cout<<"\nTotal = "<<total<<"\nPercentage = "<<per<<"\n";
if (per<33)
	cout<<"Grade = D";
	else
	if (per<45)
		cout<<"Grade = C";
		else
		if (per<60)
			cout<<"Grade = B";
				else
				cout<<"Grade = A";
}
}
