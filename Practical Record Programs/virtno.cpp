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


class B:public A
{
public:
B()
{
cout<<"This is constructor B.\n\n";
}
};


class C:public A
{
public:
C()
{
cout<<"This is constructor C.\n\n";
}
};

class D:public B,public C
{
public:
D()
{
cout<<"This is constructor D.\n\n";
}
};


main()
{
cout<<"Declaring object of D.\n\n";
D obj;
cout<<"Enter B::a.\n\n";
cin>>obj.B::a;
cout<<"\nEnter C::a.\n\n";
cin>>obj.C::a;
cout<<"\nValue in B::a = "<<obj.B::a<<" and value in C::a = "<<obj.C::a;
}




