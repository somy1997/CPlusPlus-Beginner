#include <fstream.h>
#include <iomanip.h>
#include <conio.h>
#include <stdio.h>
class Student
	{
		char S_Admno[10];  // Admission number of student
		char S_Name[30];  // Name of student
		int Percentage;  // Marks Percentage of student
	public :
		void EnterData()
			{
				clrscr();
				cout << "Enter Admission Number : ";
				gets(S_Admno);
				cout << "\nEnter Name : ";
				gets(S_Name);
				cout << "\nEnter Percentage : ";
				cin >> Percentage;
			}
		void DisplayData()
			{
				clrscr();
				cout << setw(12) << "Admno";
				cout << setw(20) << "Name";
				cout << setw(12) << "Percentage" << endl;
				cout << setw(12) << S_Admno;
				cout << setw(20) << S_Name;
				cout << setw(10) << Percentage << endl;
			}
		int ReturnPercentage()
			{
				return Percentage;
			}
	};

main()
	{
		fstream file;
		char ch;
		Student s;
		start:
		cout<<"1. Enter new Student Record\n2. Display Records of 75% above\n3. Exit";
		ch=getch();
		switch (ch)
			{
				case '1':
					{
						s.EnterData();
						file.open ("STUDENT.dat", ios::out | ios::binary);
						file.seekg(0, ios::end);
						file.write ((char*)&s, sizeof(s));
						cout << "\n\nRecord Stored. Press any key to continue. . .";
						getch();
						file.close();
						clrscr();
						break;
					}
				case '2':
					{
						file.open ("STUDENT.dat", ios::in | ios::binary);
						while (!file.eof())
							{
								file.read((char*)&s, sizeof(s));
								if (s.ReturnPercentage() >= 75)
									s.DisplayData();
							}
						cout<<"\n\nPress any key to continue . . .";
						getch();
						file.close();
						clrscr();
						break;
					}
				case '3':
					{
						return 0;
					}
				default :
					{
						break;
					}
			}
		clrscr();
		goto start;
	}



