#include <iostream.h>
#include <ctype.h>
#include <string.h>
#include <fstream.h>
#include <conio.h>
void main()
{
	char ch;
	ofstream low ("lower.txt"), up ("upper.txt"), other ("other.txt");
	cout<<"Enter characters (Press [ENTER] to close) : ";
   ch=getche();
	do
	{
		if (isupper(ch))
			up.write ((char*)&ch, 1);
		if (islower(ch))
			low.write ((char*)&ch, 1);
		if (!isalpha(ch))
			other.write ((char*)&ch, 1);
		ch=getche();
	}
	while((int)ch!=13);
	up.close();
	low.close();
	other.close();
}


