//A program to calculate the number of words present in a string.
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
int numwords(char a[])
{
	int i,wrd=1;
	for (i=0; i<strlen(a); i++)
	{
		if (a[i]==' ')
			{
			wrd++;
			while (a[i]==' ')
				i++;
			}
	}
	return wrd;
}
void main()
{
	xD:
	clrscr();
	char a[100];
	cout<<"Begin writing - "<<endl<<endl;
	gets(a);
	cout<<"\nNumber of words in the above string = "<<numwords(a)<<"\nPress any key to continue...";
	if (getch())
		goto xD;
}
