#include <iostream.h>
#include <fstream.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
class password
{
	char pass[16];
public:
	int compare(char *in)
		{	if (strcmp(pass , in)) 
				return 0;
			else
         	return 1;
		}
	void newpass (char passnew[16])
		{	strcpy(pass,passnew);
		}

};
main ()
{
	password password1;
	char x,ch,pass[16];
	xD:
	clrscr();
	cout<<"\nPress 1 for new account.\nPress 2 for login.";
	x=getch();
	switch(x)
	{
		case '1':
		{
			cout<<"\n\nEnter new password : ";
			cin.getline(pass,16);
			password1.newpass(pass);
			goto xD;
		}
		case '2':
		{
			int i;
			clrscr();
			cout<<"\n\nPassword : ";
			for (i=0; i<16; i++)
				{
				ch=getch();
				if ((int)ch==13)
					break;
				pass[i]=ch;
				cout<<"*";
				}
			if (password1.compare(pass))
				{
				cout<<"\n\nYou have logged in.";
				break;
				}
			else
				{
				cout<<"\n\nInvalid Password. Try again...";
				getch();    //or it wont display above noob
				goto xD;
				}
			}
			default:
			{
				cout<<"\nNope.";
				goto xD;
			}
	}
}
