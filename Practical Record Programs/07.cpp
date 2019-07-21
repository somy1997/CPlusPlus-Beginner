/* 7. WAP TO ILLUSTRATE THE TYPE OF MULTILEVEL INHERTITANCE: */
#include <iostream.h>
class principal
	{
		float salary;
	protected:
		char name[40];
		char school[40];
	public:
		void showname()
			{
				cout<<"\nName : "<<name;
			}
		void getsal()
			{
				return salary;
			}
		void showschool()
			{
				cout<<"\nSchool : "<<school;
			}
	}
class teacher: private principal
	{
		char subject[20];
	public
		void showsubject()
			{
				cout<<"\nSubject : "<<subject;
			}
	}
class student: protected teacher
	{
		int std;
		char section;
	public:
		void getclass()
			{
				cout<<"\nClass : "<<std<<"th '"<<section<<"'";
			}
	}
main ()




