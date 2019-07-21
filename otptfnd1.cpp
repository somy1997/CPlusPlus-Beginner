#include<iostream.h>
main()
{
int x[3][5]={{18,20,13,24,35},
			  {7,8,6,19,10},
			  {19,22,30,21,15}};
int*n=&x[0][0];
cout<<(*(n+3)+1)<<endl;
cout<<*(n+2)<<endl;
cout<<*(*x+2)+5<<endl;
cout<<++*n<<endl;
cout<<*(*(x)+2)+1<<endl;
cout<<*n<<endl;
cout<<*(*(x+2)+1)<<endl;
cout<<*(*(x+1)+3)<<endl;
cout<<*(*(x+1))<<endl;
cout<<*(n+5)+1<<endl;
}