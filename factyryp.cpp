#include <iostream.h>    //yes return yes parameter
int factorial(int n)
{
int f=1,i;
for(i=1;i<=n;i++)
	f=f*i;
return f;
}
void main()
{ int ans,x;
cout<<"Enter any number whose factorial has to be calculated - ";
cin>>x;
ans=factorial(x);
cout<<endl<<x<<"! = "<<ans;
}

