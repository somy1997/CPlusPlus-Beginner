#include <iostream.h>
void main()
{
int j;
char c;
for(char i=1;i<=5;i++)
{
c='A';
for(j=1;j<=5-i;j++)
cout<<" ";
for(j=1;j<2*i;j++)
cout<<c++;
cout<<endl;
}
}