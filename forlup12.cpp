#include <iostream.h>
void main()
{
int j;
for(char i=5;i>=1;i--)
{
for(j=1;j<=5-i;j++)
cout<<" ";
for(j=i;j>=1;j--)
cout<<"*";
cout<<endl;
}
}