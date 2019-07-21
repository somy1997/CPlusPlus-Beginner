#include <iostream.h>    //yes return no parameter
int factorial()
{
int n,f=1,i;
cout<<"Enter n";
cin>>n;
for(i=1;i<=n;i++)
   f=f*i;
return f;
}
void main()
{ int ans;
ans=factorial();
cout<<"F="<<ans;
}

