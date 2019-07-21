#include <iostream.h>
void main()
{
int a,b;
cout<<"Enter a and b respectively - \n";
cin>>a>>b;
b=a+b;
a=b-a;
b=b-a;
cout<<"a = "<<a<<"\nb = "<<b;
}
