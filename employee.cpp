#include <fstream.h>
#include <conio.h>
#include <stdio.h>
class employee
{
	int eno;
	char ename[40];
	float sal, bonu;
public:
	void seteno()
		{	cin>>eno;	}
	void setename()
		{	gets(ename);	}
	void setsal()
		{	cin>>sal;	}
	int geteno()
		{	return eno;	}
	char* getename()
		{	return ename;	}
	float getsal()
		{	return sal;	}
};
void input()
{
	char ch;
	employee e;
	ofstream fout("empl.dat", ios::binary);
	do
	{
		clrscr();
		cout<<"\nEnter details of employee : ";
		cout<<"\n\nEnter Employee number : ";
		e.seteno();
		cout<<"Enter Employee name : ";
		e.setename();
		cout<<"Enter Employee Salary : ";
		e.setsal();
		fout.write((char*)&e, sizeof(employee));
		cout<<"\nContinue? Y/N";
		ch=getch();
	}
	while (ch=='Y' || ch=='y');
	clrscr();
	fout.close();
}
void output()
{
	employee e;
	ifstream fin("empl.dat", ios::binary);
	cout<<"Employee details : ";
	while (!fin.eof())
	{
		fin.read((char*)&e, sizeof(employee));
		cout<<"\n\nEmployee Number : ";
		cout<<e.geteno();
		cout<<"\nEmployee Name : ";
		cout<<e.getename();
		cout<<"\nEmployee Salary : ";
		cout<<e.getsal();
	}
	fin.close();
}
void main()
{
	input();
	output();
}






