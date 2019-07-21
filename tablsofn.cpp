#include <iostream.h>
#include <math.h>
void main()
{
int i=1;
float n;
cout<<"ENTER A NUMBER - \n";
cin>>n;
cout<<"TABLES OF "<<n<<" :";
while(i<=10)
{
cout<<"\n"<<n<<" X "<<i<<" = "<<n*i;
i++;
}
}
