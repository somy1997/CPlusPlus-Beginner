#include <iostream.h>

class A
{
public:
void myfun()
{
cout<<"This is myfun in A.\n\n";
}
A()
{
cout<<"This is constructor A.\n\n";
}
};


class B:public A
{
public:
void myfun()
{
cout<<"This is myfun in B.\n\n";
}
B()
{
cout<<"This is constructor B.\n\n";
}
};


main()
{
B* obj;
cout<<"Calling myfun() through object of B.\n\n";
obj->myfun();
}




