#include <iostream.h>
#include <math.h>
void main()
{
float i=1, n,fact=1;
cout<<"Enter number - \n";
cin>>n;
for (i=1; i<=n; i++)
	fact=fact*i;
cout<<"Factorial = "<<fact;
}
