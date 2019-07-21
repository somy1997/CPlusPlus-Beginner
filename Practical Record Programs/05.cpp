/*5. WAP TO FIND THE AREA OF RECTANGLE, AREA OF TRIANGLE USING HERO'S
FORMULA AND AREA OF CIRCLE. (USE FUNCTION OVERLOADING CONCEPT). */
#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip.h>
float area ( float a )
	{
		return (22/7)*a*a;
	}
float area ( float a, float b)
	{
		return a*b;
	}
float area ( float a, float b, float c)
	{
		float s = (a+b+c)/2.0, x;
		x = sqrt((s*(s-a)*(s-b)*(s-c)));
		return x;
	}
void main()
	{
		restart:
		clrscr();
		float side[2], a;
		int n;
		cout<<"Enter shape (0 for circle, 1 for rectangle, 2 for triangle) : ";
		cin>>n;
		for (int i=0; i<=n; i++)
			{
				cout<<"\nEnter Length : ";

				cin>>side[i];
			}
		if (n==0)
			a = area (side[0]);
		if (n==1)
			a = area (side[0], side[1]);
		if (n==2)
			a = area (side[0], side[1], side[2]);
		cout<<"\n\n\nAREA : "<<setprecision(3)<<a<<" square units ";
		getch();
		goto restart;
	}


