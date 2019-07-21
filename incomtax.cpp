#include <iostream.h>
void main()
{
float i,tax;
char g;
cout<<"Enter gender - M/F? ";
cin>>g;
switch (g)
	{
	case 'M':
	cout<<"Enter annual taxable salary of the employee - Rs";
	cin>>i;
	if (i<180000)
	tax=0;
	else
		if (i<300000)
		tax=(i-180000)*10/100;
		else
		tax=12000+(i-300000)*20/100;
	cout<<endl<<"Income tax = Rs"<<tax<<"/-";
		break;
	case 'F':
	cout<<"Enter annual taxable salary of the employee - Rs";
	cin>>i;
	if (i<190000)
	tax=0;
	else
		if (i<320000)
		tax=(i-190000)*10/100;
		else
		tax=13000+(i-320000)*20/100;
	cout<<endl<<"Income tax = Rs"<<tax<<"/-";
		break;
	default : cout<<"INVALID GENDER";
	}
}


