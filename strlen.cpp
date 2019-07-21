//A program to calculate the length of a string without library function.
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
void main()
{
	xD:
	clrscr();
	char a[100];
	cout<<"Enter string (Max 100) : ";
	gets(a);
	cout<<"\n\nNumber of characters in above string = "<<strlen(a)<<"\nPress any key to continue...";
	if (getch())
		goto xD;
}
