#include <iostream.h>
void main()
{
float a,b,c;
char o;
cout<<"Enter the values of a and b - \n";
cin>>a>>b;
cout<<"Enter operation symbol - \n";
cin>>o;
switch(o)
	{
	case '+':
	c=a+b;
	cout<<"Sum = "<<c;
	break;
	case '-':
	c=a-b;
	cout<<"Difference = "<<c;
	break;
	case '*':
	c=a*b;
	cout<<"Product = "<<c;
	break;
	case '/':
	if(b==0)
		cout<<"\nERROR: DIVIDING BY ZERO";
	else
		{c=a/b;
		cout<<"Quotient = "<<c;}
	break;
	case '%':
	if(b==0)
		cout<<"\nERROR: DIVIDING BY ZERO";
	else
		{int q,r;
		q=a/b;
		r=a-b*q;
		cout<<"Remainder = "<<r;}
	break;
	default:
	cout<<"\n!!!WRONG OPERATOR!!!";
	}
}
