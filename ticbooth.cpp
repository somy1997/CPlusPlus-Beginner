#include <iostream.h>
#include <conio.h>
class ticbooth
	{
	int people;
	float amount;
		public:
	void initiate()
		{
		people=0;
		amount=0;
		}
	void peopleonly()
		{
		people++;
		}
	void peopleamount()
		{
		people++;
		amount+=2.50;
		}
	void display()
		{
		cout<<"\n\nTotal number of people = "<<people<<"\nTotal amount collected = "<<amount;
		}
	void tickets()
		{
		cout<<"\nNumber of tickets sold = "<<amount/2.50;
		}
	};
main()
	{
	ticbooth object;
	char ch;
	object.initiate();
	do
		{
      clrscr();
		ch='0';
		cout<<"\nTicket sold ? [Y/N] : ";
		ch=getch();
		if (ch=='y' || ch=='Y')
			object.peopleamount();
		else
			object.peopleonly();
		cout<<"\nPress any key to continue. . . (0 to terminate)";
		}
		while (getch()!='0');
	object.display();
	object.tickets();
	return 0;
	}
