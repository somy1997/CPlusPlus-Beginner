#include<string.h>
#include<iostream.h>
void main()
{
char str[9]="abcdefghi";
cout<<str;                          //why is it showing garbage values after i
char line[]="abcdefghi";
cout<<strlen(line)<<endl<<str<<line;//why is space coming when we have not used space between str & line. Why line is not showing garbage values when its length is also 9.
str="abcdefghi";
cout<<str;                          //why is error coming here
}