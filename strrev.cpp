//A program to reverse a string.
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
int strlen(char a[])
{
	int i, len=0;
	for (i=0; a[i]!='\0'; i++)
		len++;
	return len;
}
char revstr(char a[])
{
	int i,k;
	k=strlen(a);
	char rev[100];;
	for (i=0; k>0; i++)
	{
		k--;
		rev[i]=a[k];
	}
   rev[strlen(a)] = '\0';
	cout<<"\n\nReversed string : "<<rev<<"\nPress any key to continue...";
}
void main()
{
	xD:
	clrscr();
	char a[100];
	cout<<"Enter string (Max 100) : ";
	gets(a);
	revstr(a);
	if (getch())
		goto xD;
}

