#include <conio.h>
#include <iostream.h>
void main()
{
int n;
cin>>n;
clrscr();
int j;
char c;
for(char i=1;i<=n;i++)
{
c='A';
for(j=1;j<=n-i;j++)
cout<<" ";
for(j=1;j<=i;j++)
cout<<c++;
c--;
for(j=1;j<i;j++)
cout<<--c;
cout<<endl;
}
}