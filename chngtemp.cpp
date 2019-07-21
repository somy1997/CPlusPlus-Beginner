#include <iostream.h>
void main()
{
int a,b,temp;
cout<<"Enter a and b respectively -\n";
cin>>a>>b;
temp=a+b;
a=temp-a;
b=temp-b;
cout<<"a = "<<a<<"\nb = "<<b;
}