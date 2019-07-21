#include <iostream.h>
#include <conio.h>
long unsigned int reverse(long unsigned int x)
{
long unsigned int rev=0,r;
while(x!=1)
{
r=x%10;
rev=rev*10+r;
x=x/10;
}
return rev;
}
void main()
{
for(int q=1; ;q=q)
{
for(int k=1; ;k=k)
{
clrscr();
long unsigned int j,a=0,n,b,b1,r,d=0,i=1,x=1;
cout<<"Enter the number (of base 1 to 10) to be converted - \n";
cin>>n;
cout<<"Enter the base (1 to 10) in which the number is - \n";
cin>>b;
if(b>10 && b<1)
	break;
j=n;
while(j)
{
r=j%10;
j=j/10;
if(r>=b)
	{a=1;break;}
}
if(a==1)
	break;
cout<<"Enter the base (1 to 10) in which the number is to be converted - \n";
cin>>b1;
if(b1>10 || b1<1)
	break;
while (n)
{
r=n%10;
d=d+i*r;
i=i*b;
n=n/10;
}
while (d)
{
r=d%b1;
x=x*10+r;
d=d/b1;
}
cout<<"The desired number is "<<reverse(x);
getch();
}
cout<<"ERROR : YOU HAVE ENTERED THE WRONG BASE !!!\nPLEASE PRESS ANY KEY TO TRY AGAIN .";
getch();
}
}
