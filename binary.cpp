#include <iostream.h>
#include <conio.h>
#include <dos.h>
void main()
{
char a=1;
while(a==1)
{
for(char b=1;b==1;b+=0)
{
//*1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100.*//
char ch;
int ctr=0;
cout<<"Think of any number between 1 to 100.\nPress any key to continue\n";
getch();
clrscr();
cout<<"Is your number present in the following box? \n 1, 3, 5, 7, 9, 11, 13, 15, 17, 19,\n 21, 23, 25, 27, 29, 31, 33, 35, 37, 39,\n 41, 43, 45, 47, 49, 51, 53, 55, 57, 59,\n 61, 63, 65, 67, 69, 71, 73, 75, 77, 79,\n 81, 83, 85, 87, 89, 91, 93, 95, 97, 99.\n (Y/N)? ";
ch=getch();
if (ch=='y' || ch=='Y' || ch=='n' || ch=='N')
	{
	switch (ch)
	{
	case'y':ctr++;
			  break;
	case'Y':ctr++;
			  break;
	default:ctr=ctr;
	}
	}
else
	{
	clrscr();
	cout<<"INVALID INPUT. COMMENCING SELF DISTRUCT. NUCLEAR EXPLOSION IN 10 SECONDS.\nEVACUATION ADVICED.\nPRESS ANY KEY TO TELEPORT TO MOON AND ESCAPE THE EXPLOSION . . .";
	getch();
	clrscr();
	break;
	}
clrscr();
cout<<"Is your number present in the following box? \n 2, 3, 6, 7, 10, 11, 14, 15, 18, 19,\n 22, 23, 26, 27, 30, 31, 34, 35, 38, 39,\n 42, 43, 46, 47, 50, 51, 54, 55, 58, 59,\n 62, 63, 66, 67, 70, 71, 74, 75, 78, 79,\n 82, 83, 86, 87, 90, 91, 94, 95, 98, 99. \n (Y/N)? ";
ch=getch();
if (ch=='y' || ch=='Y' || ch=='n' || ch=='N')
	{
	switch (ch)
	{
	case'y':ctr+=2;
			  break;
	case'Y':ctr+=2;
			  break;
	default:ctr=ctr;
	}
	}
else
	{
	clrscr();
	cout<<"INVALID INPUT. COMMENCING SELF DISTRUCT. NUCLEAR EXPLOSION IN 10 SECONDS.\nEVACUATION ADVICED.\nPRESS ANY KEY TO TELEPORT TO MOON AND ESCAPE THE EXPLOSION . . .";
	getch();
	clrscr();
	break;
	}
clrscr();
cout<<"Is your number present in the following box? \n 4, 5, 6, 7, 12, 13, 14, 15, 20, 21,\n 22, 23, 28, 29, 30, 31, 36, 37, 38, 39,\n 44, 45, 46, 47, 52, 53, 54, 55, 60, 61,\n 62, 63, 68, 69, 70, 71, 76, 77, 78, 79,\n 84, 85, 86, 87, 92, 93, 94, 95, 100.\n (Y/N)? ";
ch=getch();
if (ch=='y' || ch=='Y' || ch=='n' || ch=='N')
	{
	switch (ch)
	{
	case'y':ctr+=4;
			  break;
	case'Y':ctr+=4;
			  break;
	default:ctr=ctr;
	}
	}
else
	{
	clrscr();
	cout<<"INVALID INPUT. COMMENCING SELF DISTRUCT. NUCLEAR EXPLOSION IN 10 SECONDS.\nEVACUATION ADVICED.\nPRESS ANY KEY TO TELEPORT TO MOON AND ESCAPE THE EXPLOSION . . .";
	getch();
	clrscr();
	break;
	}
clrscr();
cout<<"Is your number present in the following box? \n 8, 9, 10, 11, 12, 13, 14, 15, 24, 25,\n 26, 27, 28, 29, 30, 31, 40, 41, 42, 43,\n 44, 45, 46, 47, 56, 57, 58, 59, 60, 61,\n 62, 63, 72, 73, 74, 75, 76, 77, 78, 79,\n 88, 89, 90, 91, 92, 93, 94, 95.\n (Y/N)? ";
ch=getch();
if (ch=='y' || ch=='Y' || ch=='n' || ch=='N')
	{
	switch (ch)
	{
	case'y':ctr+=8;
			  break;
	case'Y':ctr+=8;
			  break;
	default:ctr=ctr;
	}
	}
else
	{
	clrscr();
	cout<<"INVALID INPUT. COMMENCING SELF DISTRUCT. NUCLEAR EXPLOSION IN 10 SECONDS.\nEVACUATION ADVICED.\nPRESS ANY KEY TO TELEPORT TO MOON AND ESCAPE THE EXPLOSION . . .";
	getch();
	clrscr();
	break;
	}
clrscr();
cout<<"Is your number present in the following box? \n 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,\n 26, 27, 28, 29, 30, 31, 48, 49, 50, 51,\n 52, 53, 54, 55, 56, 57, 58, 59, 60, 61,\n 62, 63, 80, 81, 82, 83, 84, 85, 86, 87,\n 88, 89, 90, 91, 92, 93, 94, 95.\n (Y/N)? ";
ch=getch();
if (ch=='y' || ch=='Y' || ch=='n' || ch=='N')
	{
	switch (ch)
	{
	case'y':ctr+=16;
			  break;
	case'Y':ctr+=16;
			  break;
	default:ctr=ctr;
	}
	}
else
	{
	clrscr();
	cout<<"INVALID INPUT. COMMENCING SELF DISTRUCT. NUCLEAR EXPLOSION IN 10 SECONDS.\nEVACUATION ADVICED.\nPRESS ANY KEY TO TELEPORT TO MOON AND ESCAPE THE EXPLOSION . . .";
	getch();
	clrscr();
	break;
	}
clrscr();
cout<<"Is your number present in the following box? \n 32, 33, 34, 35, 36, 37, 38, 39, 40, 41,\n 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,\n 52, 53, 54, 55, 56, 57, 58, 59, 60, 61,\n 62, 63, 96, 97, 98, 99, 100.\n (Y/N)? ";
ch=getch();
if (ch=='y' || ch=='Y' || ch=='n' || ch=='N')
	{
	switch (ch)
	{
	case'y':ctr+=32;
			  break;
	case'Y':ctr+=32;
			  break;
	default:ctr=ctr;
	}
	}
else
	{
	clrscr();
	cout<<"INVALID INPUT. COMMENCING SELF DISTRUCT. NUCLEAR EXPLOSION IN 10 SECONDS.\nEVACUATION ADVICED.\nPRESS ANY KEY TO TELEPORT TO MOON AND ESCAPE THE EXPLOSION . . .";
	getch();
	clrscr();
	break;
	}
clrscr();
cout<<"Is your number present in the following box? \n 64, 65, 66, 67, 68, 69, 70, 71, 72, 73,\n 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,\n 84, 85, 86, 87, 88, 89, 90, 91, 92, 93,\n 94, 95, 96, 97, 98, 99, 100.\n (Y/N)? ";
ch=getch();
if (ch=='y' || ch=='Y' || ch=='n' || ch=='N')
	{
	switch (ch)
	{
	case'y':ctr+=64;
			  break;
	case'Y':ctr+=64;
			  break;
	default:ctr=ctr;
	}
	}
else
	{
	clrscr();
	cout<<"INVALID INPUT. COMMENCING SELF DISTRUCT. NUCLEAR EXPLOSION IN 10 SECONDS.\nEVACUATION ADVICED.\nPRESS ANY KEY TO TELEPORT TO MOON AND ESCAPE THE EXPLOSION . . .";
	getch();
	clrscr();
	break;
	}
clrscr();
if (ctr<=100)
{
cout<<"G";
delay(125);
cout<<"U";
delay(125);
cout<<"E";
delay(125);
cout<<"S";
delay(125);
cout<<"S";
delay(125);
cout<<"I";
delay(125);
cout<<"N";
delay(125);
cout<<"G";
delay(125);
cout<<" ";
delay(125);
cout<<"Y";
delay(125);
cout<<"O";
delay(125);
cout<<"U";
delay(125);
cout<<"R";
delay(125);
cout<<" ";
delay(125);
cout<<"N";
delay(125);
cout<<"U";
delay(125);
cout<<"M";
delay(125);
cout<<"B";
delay(125);
cout<<"E";
delay(125);
cout<<"R";
delay(125);
cout<<".";
delay(125);
cout<<".";
delay(125);
cout<<".";
delay(125);
clrscr();
cout<<"G";
delay(125);
cout<<"U";
delay(125);
cout<<"E";
delay(125);
cout<<"S";
delay(125);
cout<<"S";
delay(125);
cout<<"I";
delay(125);
cout<<"N";
delay(125);
cout<<"G";
delay(125);
cout<<" ";
delay(125);
cout<<"Y";
delay(125);
cout<<"O";
delay(125);
cout<<"U";
delay(125);
cout<<"R";
delay(125);
cout<<" ";
delay(125);
cout<<"N";
delay(125);
cout<<"U";
delay(125);
cout<<"M";
delay(125);
cout<<"B";
delay(125);
cout<<"E";
delay(125);
cout<<"R";
delay(125);
cout<<".";
delay(125);
cout<<".";
delay(125);
cout<<".";
delay(125);
clrscr();
cout<<"G";
delay(125);
cout<<"U";
delay(125);
cout<<"E";
delay(125);
cout<<"S";
delay(125);
cout<<"S";
delay(125);
cout<<"I";
delay(125);
cout<<"N";
delay(125);
cout<<"G";
delay(125);
cout<<" ";
delay(125);
cout<<"Y";
delay(125);
cout<<"O";
delay(125);
cout<<"U";
delay(125);
cout<<"R";
delay(125);
cout<<" ";
delay(125);
cout<<"N";
delay(125);
cout<<"U";
delay(125);
cout<<"M";
delay(125);
cout<<"B";
delay(125);
cout<<"E";
delay(125);
cout<<"R";
delay(125);
cout<<".";
delay(125);
cout<<".";
delay(125);
cout<<".";
clrscr();
cout<<"The number in your mind is "<<ctr<<".";
cout<<"\nPress any key to continue . . .";
getch();
clrscr();
}
else
{
cout<<"Dude, don't screw around. Dude, leave everything and drink mountain dew.";
cout<<"\nPress any key to continue . . .";
getch();
clrscr();
}
}
}
}
