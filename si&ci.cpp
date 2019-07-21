#include <iostream.h>
#include <math.h>
void main()
{
float p,r,t,Si,Ci;
cout<<"Enter Principle, Rate and time respectively";
cin>>p>>r>>t;
Si=(p*r*t)/100;
Ci=(p*pow((1+(r/100)),t))-p;
cout<<"Simple interest = "<<Si<<" Coumpound interest = "<<Ci;
}
