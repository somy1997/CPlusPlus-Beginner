#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
	char str[4000];
	int i,j;
	cout<<"Enter string - ";
	gets(str);
	for(i=0;str[i]!='\0';i++)
		if ((str[i-1]==' ')&&(str[i]=='y'||str[i]=='Y') && (str[i+1]=='o'|| str[i+1]=='O') && (toupper(str[i+2])=='U')&&(str[i+3]==' '))
			{
			if(isupper(str[i]))
				str[i]='M';
			else
				str[i]='m';
			if(isupper(str[i+1]))
				str[i+1]='E';
			else
				str[i+1]='e';
			for(j=i+2;str[j]!='\0';j++)
				{str[j]=str[j+1];
				}
			i++;
			}
	cout<<str;
    
 }
