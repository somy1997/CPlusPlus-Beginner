#include <iostream.h>
void main()
{
int j;
for(char i=1;i<=9;i+=2)
{
for(j=1;j<=9-i;j++)
cout<<" ";
for(j=1;j<=i;j++)
cout<<"* ";
cout<<endl;
}
}