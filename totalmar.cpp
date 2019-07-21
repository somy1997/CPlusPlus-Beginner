#include <iostream.h>
void main()
{
int m1,m2,m3,m4,m5,total;
float per;
cout<<"Enter marks in all 5 subjects individually - ";
cin>>m1>>m2>>m3>>m4>>m5;
total=m1+m2+m3+m4+m5;
per=total/5.0;
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

