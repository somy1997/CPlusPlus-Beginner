#include <iostream.h>
#include <math.h>
void main()
{
float a,b,c,x1,x2,D;
cout<<"Enter co-efficient of x^2 \n";
cin>>a;
cout<<"Enter co-efficient of x \n";
cin>>b;
cout<<"Enter constant term \n";
cin>>c;
D=b*b-4*a*c;
	if (D<0)
	{
	cout<<"Roots are imaginary";
	}
	else
	{
	x1=(-b+sqrt(D))/(2*a);
	x2=(-b-sqrt(D))/(2*a);
	cout<<"The roots are "<<x1<<" and "<<x2;
	}
}
