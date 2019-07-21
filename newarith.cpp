# include <iostream.h>


class AC
{
float c;
void add(float a,float b);
void sub(float a,float b);
void prod(float a,float b);
void quot(float a,float b);
void mod(int a,int b);
public:
void calc();
};



void AC::add(float a,float b)
{
c=a+b;cout<<a<<"+"<<b<<"="<<c;
}

void AC::sub(float a,float b)
{
c=a-b;cout<<a<<"-"<<b<<"="<<c;
}

void AC::prod(float a,float b)
{
c=a*b;cout<<a<<"*"<<b<<"="<<c;
}

void AC::quot(float a,float b)
{
c=a/b;cout<<a<<"/"<<b<<"="<<c;
}

void AC::mod(int a,int b)
{
c=a%b;cout<<a<<"%"<<b<<"="<<c;
}


void AC ::calc()
{char ch;float a,b;int ctr;
start:
cout<<"please enter the numbers"<<endl;
cin>>a>>b;
cout<<"please choose from the following\n1. addition\n2. substraction\n3. multiplication\n4. division\n5. remainder\n"<<endl;
cin>>ctr;
switch(ctr)
{
	case 1 : add(a,b);break;
	case 2 : sub(a,b);break;
	case 3 : prod(a,b);break;
	case 4 : if(b==0)
					{cout<<"enter again\n"; goto start;}
				quot(a,b);
				break;
	case 5 : if(b==0)
					{cout<<"enter again\n"; goto start;}
				mod(a,b);
				break;
	default : cout<<" oops !!!!!! TRY AGAIN"<<endl;goto start;
}
cout<<"\nDo you want to try again?(Y/N)";
cin>>ch;
if(ch=='y'||ch=='Y')
	goto start;
}



void main()
{
AC obj;
obj.calc();
}

