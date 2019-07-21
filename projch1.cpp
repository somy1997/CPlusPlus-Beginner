#include <fstream.h>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>



int switch3case1()
{
cout<<p.getcardno(); flag=0;
while (fch)
	{
	fch.read ((char*)&cu, sizeof(checkup));
	if (cu.getcardno() == p.getcardno())
		{
		cu.show_without_cardno();
		flag=1;
		}
	}
if (flag == 0)
	{
	cout<<"0 record found";
	return 0;
	}
}

void switch2case2()
	{

								ic1:
								cout<<"Enter card no.";
								cin>>cardno;
								cout<<"Enter '1' for patients medical history .'2' for checkup";
								cin>>ch;
								switch (ch)
									{                                            //Start of switch 3
										case '1':                                //See patient's medical history
											{
											if(switch3case1()==0)
												break;
											}
										case '2':                                 //for checkup
											{
											cout<<"\nEnter medicine : ";
											cu.input_medicines();
											cout<<"\nEnter Remarks : ";
											cin>>cu.remarks;
											fcu.write ((char*)&cu, sizeof(checkup));
											break;
											}
										default:
											{
												cout<<"Incorrect Input. Press any key to continue . . . ";
												getch();
												goto ic1;
											}
									}  //End of switch 3
	}
int checkauthcode();
struct datetime
	{
		unsigned int second, minute, hour, date, month, year;
		long unsigned int dateeq, timeeq;                        // Date and time equivivalent for comparision.
	};
struct medicallist
	{
		char* mediname;
		int quantity;
	};
struct authcode
	{long unsigned int code;
	 char secq[400];
	 char seca[400];
	 int ft;  																		 //For first time i.e input or master reset
	}ac;
class checkup
	{
		int date;
		int time;
		int cardno;
		medicallist medicine[100]; int n;
		char doctor[100];
	public:
		int gettime()
			{ return time; }
		int getdate()
			{ return date; }
		int getcardno()
			{ return cardno; }
		char* getdoctor()
			{ return doctor; }
		void input_medicine()
			{
				char ch;
				int i=0;
				getch();
			do
				{
					cout<<"Enter medicine : ";
					cin>>medicine[i].mediname;
					cout<<"Enter qunatity : ";
					cin>>medicine[i].quantity;
					i++;
					ch=getch();
					cout<<"Press [TAB] to exit. Press any key to continue. . . ";
				}
			while (ch!='\t') ;
			n=i;
			}
		void show_without_date()
			{
				checkup cu;
				cout<<"Date : "<<date;
				ofstream fout ("PCH", ios::binary);
				while (fout)
					{
						fout.write ((char*)&cu, sizeof(checkup));
						cout<<"\nTime : \t"<<time;
						cout<<"\nCard no. : \t"<<cardno;
							for (int i=0; i<n; i++)
						cout<<"\nMedicine : \t"<< medicine[i].mediname<<" Quantity : "<< medicine[i].quantity;
						cout<<"\nDoctor : \t" << doctor;
					}
			}
		void show_without_cardno()
			{
				checkup cu;
				cout<<"Card no : "<<cardno;
				ofstream fout ("PCH", ios::binary);
				while (fout)
					{
						fout.write ((char*)&cu, sizeof(checkup));
						cout<<"\nDate : \t"<<date;
						cout<<"\nTime : \t"<<time;
						for (int i=0; i<n; i++)
							cout<<"\nMedicine : \t"<< medicine[i].mediname<<" Quantity : "<< medicine[i].quantity;
						cout<<"\nDoctor : \t" << doctor;
					}
			}
		void show_without_doctor()                     //it must have a copy constant function and parameters
			{
				checkup cu;
				cout<<"Doctor : Dr."<<doctor;
				ofstream fout ("PCH", ios::binary);
				while (fout)
					{
						fout.write ((char*)&cu, sizeof(checkup));
						cout<<"\nDate : \t"<<date;
						cout<<"\nTime : \t"<<time;
						cout<<"\nCard no : \t"<<cardno;
						for (int i=0; i<n; i++)
							cout<<"\nMedicine : \t"<< medicine[i].mediname<<" Quantity : "<< medicine[i].quantity;
					}
			}
		void set(char* doctorname,int dinank)                                //const taking date, time and docter as peremeters
			{
				date=dinank;
				strcpy(doctor,doctorname);
				cin>>cardno;
				cin>>time;
			}
	};
class patient
	{
		unsigned long int cardno;
		int age;
		int dob;
		char bg[4];
		char* name;
		char gender;
		char* category;
	public:
		int getcardno()
			{return cardno;}
		void enter_new_patient()
			{
				int r=0;
				patient p;
				fstream fd("PD", ios::in|ios::out|ios::binary);
				fd.seekg(0);
				unsigned long int i;
				start:
				cout<<"\n\nEnter card number";
				cin>>cardno;
				i=cardno;
				while(i)
					{
						i/=10;r++;
					}
				if(r!=6)
					{
						cout<<"REDIRECTING";
						getch();
						goto start;
					}
				while (fd)
					{
						fd.read((char*)&p,sizeof(p));
						if(p.getcardno()==cardno)
							{
								cout<<"REDIRECTING";
								getch();
								goto start;
							}
					}
				cout<<"CARD NO. REGISTERED SUCCESSFULLY."
					 <<"\nEnter Name : ";
				cin>>name;
				cout<<"\nEnter Age : ";
				cin>>age;
				cout<<"\nEnter Gender : ";
				cin>>gender;
				cout<<"\nEnter Date of Birth : ";
				cin>>dob;
				bgs:
				cout<<"\nEnter Bloodgroup : ";
				cin>>bg;
				r=0;
				if(!(((bg[0]=='A'||bg[0]=='B'||bg[0]=='O')&&(bg[1]=='+'||bg[1]=='-')&&(bg[2]=='\0'))||(bg[0]=='A'&&bg[1]=='B'&&(bg[2]=='+'||bg[2]=='-')&&bg[3]=='\0')))
					{
					cout<<"REDIRECTING";
					goto bgs;
					}
				cout<<"\nEnter Category : ";
				cin>>category;
			}

		void show_patient()
			{
				cout<<"\n\nPatient Details :"
					 <<"\nCard no. : "<<cardno
					 <<"\nName : "<<name
					 <<"\nDate of Birth : "<<dob
					 <<"\nAge : "<<age
					 <<"\nBlood Group : "<<bg
					 <<"\nGender : "<<gender
					 <<"\nCategory : "<<category;
			}

		void edit_patient_data()
			{
				int r;
				show_patient();
				cout<<"\n\nEnter New Patient Data : "
					 <<"\nEnter Name : ";
				cin>>name;
				cout<<"\nEnter Age : ";
				cin>>age;
				cout<<"\nEnter Gender : ";
				cin>>gender;
				cout<<"\nEnter Date of Birth : ";
				cin>>dob;
				bgs:
				cout<<"\nEnter Bloodgroup : ";
				cin>>bg;
				r=0;
				if(!(((bg[0]=='A'||bg[0]=='B'||bg[0]=='O')&&(bg[1]=='+'||bg[1]=='-')&&(bg[2]=='\0'))||(bg[0]=='A'&&bg[1]=='B'&&(bg[2]=='+'||bg[2]=='-')&&bg[3]=='\0')))
					{
					cout<<"REDIRECTING";
					goto bgs;
					}
				cout<<"\nEnter Category : ";
				cin>>category;
			}



	};
class doctor
	{
		char* doctorname;
		char* password;
	public:
		int enter_new_doctor()
			{
				doctor d;
				fstream fd; fd.open ("DD", ios::in | ios::out | ios::binary);
				if (checkauthcode())
					{
						fd.seekg(0, ios::end);
						cout<<"\n\nEnter Doctor Name : ";
						cin>>d.doctorname;
						cout<<"\nEnter Password : ";
						cin>>password;
						fd.write ((char*)&d, sizeof(d));
						cout<<"\nDoctor added to list.";
						return 1;
					}
				else
					return 0;
			}
		char* get_password()
			{ return password; }
		char* get_doctor_name()
			{ return doctorname; }
		void edit_doctor()
			{
				char ch;
				char* pass;
				reenter:
				cout<<"Current Doctor Details : "
					 <<"\nName : Dr. ";
				cout<<doctorname;
				cout<<"Enter Password to edit Doctor name and password : ";
				cin>>pass;
				if (!strcmp (pass, password))
					{
						cout<<"\nEnter Doctor Name : Dr. ";
						cin>>doctorname;
						cout<<"\nEnter New Password : ";
						cin>>password;
					}
				else
					{
						cout<<"Wrong Password. Press [1] to try again. \nPress any key to continue. . .";
						ch=getch();
						if (ch==1)
							goto reenter;
					}
			}

	};

int checkauthcode()
	{
		int n;
		char* str;
		char ch;
		codein:
		cout<<"Enter Authcode : ";
		cin>>n;
		if (ac.code == n )
			{
				cout<<"Code Matched";
				return 1;
			}
		else
			{
				cout<<"Code Invalid!"
					 <<"\n\nEnter '0' to answer security questions."
					 <<"\n\nEnter '1' to try again ... ";
				cin>>ch;
				switch (ch)
					{
						case '1': goto codein;
						case '0':
							{
								cout<<"Please answer the following question (Only 1 try): ";
								cout<<ac.secq;
								cin>>str;
								if (!strcmp(str, ac.seca))
									{
										cout<<"Success."
											 <<"\nAuthCode : "
											 <<ac.code;
										cout<<"\nPress any key to continue ... ";
										getch();
										return 1;
									}
								else
									{
										cout<<"Incorrect answer. Redirecting... ";
										return 0;
									}
							}
						default :
							{
								cout<<"Invalid Input. Redirecting...";
								goto codein;
							}
					}
			}
	}




void main()
	{
		fstream fch, fd, fp;
		checkup cu;
		patient p;
		doctor d;
		int success, flag=0; unsigned long int cardno;
		char ch,*doctorname,*password;
		fch.open ("PCH", ios::in | ios::app | ios::binary);
		fd.open ("DD", ios::in | ios::app | ios::binary);
		fp.open ("PD", ios::in | ios::app | ios::binary);
	start:
		cout<<"--- Main Menu --- \n\nPress '1' to login doctor \nPress '2' to login as new doctor \nPress '3' to change settings";
		cin>>ch;

		switch(ch)               //Start of switch 1
		{
			case 2:                                                 //login as new doc
			{
			success= d.enter_new_doctor();
				if (success==0)
					break;
			fd.write ((char*)&d, sizeof(doctor));
			cout<<"You have been successfully registered";
			break;
			}
			case 1:                                                 // login as doc
			{
				start1:
				cout<<"Please enter username : ";
				cin>>doctorname;
				while (fd)
					{
						fd.read ((char*)&d, sizeof(doctor));
						if (d.get_doctor_name()==doctorname)
							{
								flag=1;
							cout<<"Please enter password : ";
							cin>>password;
							if (d.get_password() == password)
								cout<<"welcome"<<d.get_doctor_name();
							else
								cout<<"Invalid Password. Press '0' to retry";
					}
				if (flag == 0)
					{
						cout<<"Doctor not found. Please try again...";
						goto start1;
					}
				ic2:
				fd.seekg(0);
				cout<<"Doctor's menu -- '1': See doctor history '2': New checkup '3': Goto date history '4': Goto Main Menu";
				cin>>ch;
				switch (ch)                                  //Start of Switch 2
					{
						case '1':                              // see doc history
							{
								cout<<d.get_doctor_name(); flag=0;
								while (fch)
									{
										fch.read ((char*)&cu, sizeof(checkup));
										if (cu.getdoctor() == d.get_doctor_name())
											{
												cu.show_without_doctor();
												flag=1;
											}
									}
								if (flag == 0)
									{
										cout<<"0 record found";
										break;
									}
							}
						case '4':                 // goto main menu
							{
								goto start;
							}                     // Date history
						case '3':
							{
								cu.show_without_date();
								break;
							}

						case '2':                               //New checkup
							{
								swtch2case2();
							}  //End of case 2
						default :
							{
								cout<<"Incorrect Input. Press any key to continue . . . ";
								getch();
								goto ic2;
							}
					 }                         //end of switch 2
				}                             //end of switch1case1

					 case '3':
						{
							settings:
							cout<<"--- Settings ---";
							cout<<"\n\n 1. Reset Database. \n2. Change Doctor Details. \n3. Exit. \n4. Change Authcode.";
							cin>>ch;
							switch (ch)
							{
									case '1':
										{
											ch=checkauthcode();
											if (ch);
												{	fd.open ("DD", ios::trunc);
													fp.open ("PD", ios::trunc);
													fch.open ("PCH", ios::trunc);
													fd.close();
													fp.close();
													fch.close();
												}
											break;
										}
									case '2':
										{
											char* docname;
											ch=checkauthcode();
											if (ch);
												{
													cout<<"\nEnter Doctor name : ";
													cin>>docname;
													while (fd)
														{
															fd.read ((char*)&d, sizeof(d));
															if (!strcmp(docname, d.get_doctor_name()))
																{
																	d.edit_doctor();
																	fd.seekp(-sizeof(d), ios::cur);
																	fd.write ((char*)&d, sizeof(d));
																	break;
																}
														}
												}
										}
									case '3': goto start;
									case '4':
										{
											if (checkauthcode())
												changeauthcode();         //write function changeauthcode()
											break;
										}
									default :
										{
											cout<<"Invalid Input. Please try again...";
											goto settings;
										}
							}

						}
					 default:
						{
							cout<<"Incorrect Input. Press any key to continue . . . ";
							getch();
							goto ic1;
						}
		}
	}

void changeauthcode()
	{
		cout<<"Enter New Authcode : ";
		cin>>authcode.code;
	}







