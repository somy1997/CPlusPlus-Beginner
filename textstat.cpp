// Chapter 12, Problem 29. Program to determine statistics of some txt in terms of line-count, word-count, character-count. Use a function Text_Stat() to do the same. This function recieves
// four parameters : text lc, wc, cc, where last three parameters lc, wc and cc are of integer type and are passed by reference.
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
int wordcount(char a[])
{
	int i, wc=1;
	for (i=0; a[i]!='\0'; i++)
		if (a[i]==' ' || a[i]=='\n')
		{
			wc++;
			while (a[i]==' ' || a[i]=='\n')
				i++;
		}
	return wc;
}
int charcount (char a[])
{
	int i, cc=0;
	for (i=0; a[i]!='\0'; i++)
		cc++;
	return cc-1;
}
int linecount (char a[])
{
	int i, lc=1;
	for (i=0; a[i]!='\0'; i++)
		if (a[i]=='\n')
			lc++;
	return lc;
}
void Text_Stat (char a[], int & lc, int & wc, int & cc)
{
	lc=linecount(a);
	wc=wordcount(a);
	cc=charcount(a);
}
void main()
{
	xD:
	clrscr();
	char a[100];
	int lc, wc, cc;
	cout<<"Enter string (Input [~] to terminate) : \n\n";
	cin.getline(a, 1000, '~');
	Text_Stat(a, lc, wc, cc);
	cout<<"\n\nNumber of lines = "<<lc<<"\nNumber of words = "<<wc<<"\nNumber of characters = "<<cc;
	if (getch())
		goto xD;
}

