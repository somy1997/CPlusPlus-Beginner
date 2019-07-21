/*prg for implementation of hybrid inheritance with virtual and without virtual.

class A member a
inherited by class B(a) and class C(c)
inthaerited by class D(d)*/

#include <iostream.h>

class A
{
public:
int a;
A()
{
cout<<"This is constructor A.\n\n";
}
};


class B:virtual public A
{
public:
int a;           //change to b
B()
{
cout<<"This is constructor B.\n\n";
}
};


class C:virtual public A
{
public:
int c;
C()
{
cout<<"This is constructor C.\n\n";
}
};

class D:public B,public C
{
public:
int d;
D()
{
cout<<"This is constructor D.\n\n";
}
};


main()
{
cout<<"Declaring object of D.\n\n";
D ob1;
cout<<"Size of object of class D = "<<sizeof(ob1)<<endl<<endl;
cout<<"Enter a.\n\n";
cin>>ob1.a;
cout<<"\nValue in A::a = "<<ob1.A::a<<" and value in B::a = "<<ob1.B::a<<" and value in C::a = "<<ob1.B::a<<endl<<endl;
cout<<"Declaring object of B.\n\n";
B ob2;
cout<<"Enter a.\n\n";
cin>>ob2.a;
cout<<"\nValue in A::a = "<<ob2.A::a<<" and value in B::a = "<<ob2.B::a;     //change to B::b and see the output
}




