#include <iostream.h>
#include <math.h>
void main()
{
float per,m,p,c,e,cs;
cout<<"Enter Marks in Maths, Physics, Chemistry, English, Coumputer Science out of 100 respectively - ";
cin>>m>>p>>c>>e>>cs;
per=((m+p+c+e+cs)/500)*100;
cout<<"You have failed. Lol jk. Your have got "<<per<<"%. Congrats.";
}
