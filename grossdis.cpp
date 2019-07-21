#include <iostream.h>
#include <math.h>
void main()
{ float q, pr, disc, g, net;
cout<<"Enter price - ";
cin>>pr;
cout<<"\nEnter quantity - ";
cin>>q;
cout<<"\nEnter discount - ";
cin>>disc;
g=pr*q;
disc=g*disc/100;
net=g-disc;
cout<<"\nGross = "<<g<<"\nDiscount = "<<disc<<"\nNet = "<<net<<"\n\nThank you for shopping ^_^";
}
