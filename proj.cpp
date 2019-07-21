#include <fstream.h>
struct medicallist
	{
		char* mediname;
		int quantity;
	};
class checkup
	{
		int date;
		int time;
		int cardno;
		medicallist medicine[100]; int n;
		char* doctor;
	public:
		int gettime()
			{return time;}
		int getdate()
			{return date;}
		int getcardno()
			{return cardno;}
		char* getdoctor()
			{return doctor;}
		void input_medicine()
		void show_without_date()
		void show_without_cardno()
		void show_without_doctor()                     //it must have a copy constant function and parameters
		void set(char* doctorname,int dinank)                                //const taking date, time and docter as peremeters
			{
				date=dinank;
				strcpy(doctor,doctorname);
				cin>>cardno();
				cin>>time;
			}
	};
class patient
	{
		int age;
		int dob;
		int cardno;
		char* bloodgroup;
		char* name;
		char gender;
		char* category;
	public:
		int getcardno();
		void enter_new_patient();
		void edit_patient_data();
		void show_patient();
	};
class doctor
	{
		char* doctorname;
		static int athu_code;
		char* password;
	public:
		int enter_new_doctor();                          //also checkup athu. code
		void get_password();
		void get_doctor_name();
	};
void main()
	{
		fstream fch, fd, fp;
		checkup cu;
		patient p;
		doctor d;
		fch.open ("PCH", ios::in | vos::app: ios:binary)
		fd.open ("DD", ios::in | vos::app: ios:binary)
		fp.open ("PD", ios::in | vos::app: ios:binary)
	start:
		cout<<"Main Menu, press '1' to login doctor, press '2' to login as new doctor, '3' to change settings";
		cin>>ch;
		switch(ch)
		{
			case 2:
			{
				success= d.enter_new_doctor();
				if (success==0)
					break;
				fd.write ((char*)&d, size of (doctor));
			cout<<"You have been successfully regestered"; break;
			case 1:
			{
				start1:
				cout<<"Please enter username : ";
				while (fd)
					{
						fd.read (char*(d), size of (doctor));
						if (d.get_doctorname==doctorname)
							{
								flag=1;
							cout<<"Please enter password : ";
							cin>>password;
							if (d.get_password == password)
								cout<<"welcome"<<d.get_doctorname;
							else
								cout<<"Invalid Password. Press '0' to retry";
					}
				if (flag == 0)
					{
						cout<<"please try again...";
						goto start1;
					}
				fd.seekg(0);
				cout<<"Doctor's menu: '1': See doctor history '2': New checkup '3': Goto main menu '4': Goto date history";
				cin>>ch;
				switch (ch);
					{
						case 1:
							{
								cout<<d.getusername(); flag=0
								whle (fch)
									{
										fch.read ((char*)fcu, size of (checkup));
										if (cu.getdoctorname == d.getusername())
											{
												cu.display_without_doctorname();
												flag=1;
											}
									}
								if (flag == 0)
									{
										cout<<"0 record found";
										break;
									}
						case 3:
							{
								goto start;
								break;
							}
						case 4:
							{
								cout<<"Enter date

						case 2:
							{
								cout<<"Enter card no.";
								cin>>cardno;
								cout<<"Enter '1' for patients medical history '2' for checkup";






