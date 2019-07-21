#include <fstream.h>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <process.h>





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
	{
		long unsigned int code;
		char secq[400];
		 char seca[400];
		 int ft;  																		 //For first time i.e input or master reset
	}ac;


void changeauthcode()
	{
		cout<<"Enter New AuthCode : ";
		cin>>ac.code;
	}
int checkauthcode();


class checkup
	{
		int date;
		int time;
		int cardno;
		medicallist medicine[100]; int n;
		char doctor[100];
	public:
		char remark[1000];
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
				cout<<"\nTime : \t"<<time;
				cout<<"\nCard no. : \t"<<cardno;
				for (int i=0; i<n; i++)
					cout<<"\nMedicine : \t"<< medicine[i].mediname<<" Quantity : "<< medicine[i].quantity;
				cout<<"\nRemarks : \t"<<remark;
				cout<<"\nDoctor : \t" << doctor;
			}
		void show_without_cardno()
			{
				cout<<"\nDate : \t"<<date;
				cout<<"\nTime : \t"<<time;
				for (int i=0; i<n; i++)
					cout<<"\nMedicine : \t"<< medicine[i].mediname<<" Quantity : "<< medicine[i].quantity;
				cout<<"\nRemarks : \t"<<remark;
				cout<<"\nDoctor : \t" << doctor;
			}
		void show_without_doctor()                     //it must have a copy constant function and parameters
			{
				cout<<"\nDate : \t"<<date;
				cout<<"\nTime : \t"<<time;
				cout<<"\nCard no : \t"<<cardno;
				for (int i=0; i<n; i++)
					cout<<"\nMedicine : \t"<< medicine[i].mediname<<" Quantity : "<< medicine[i].quantity;
				cout<<"\nRemarks : \t"<<remark;
			}
		void set(char* doctorname,int dinank)                                //const taking date, time and docter as peremeters
			{
				date=dinank;
				strcpy(doctor,doctorname);
				cin>>cardno;
				cin>>time;
			}
	}cu;
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
				fstream fp("PD", ios::in|ios::out|ios::binary);
				fp.seekg(0);
				unsigned long int i;
				start:
				cout<<"\n\nEnter card number";
				cin>>cardno;
				i=cardno;
				while(i)
					{
						i/=10;
						r++;
					}
				if(r!=6)
					{
						cout<<"REDIRECTING";
						getch();
						goto start;
					}
				while (fp)
					{
						fp.read((char*)&p,sizeof(p));
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
				fp.close();
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



	}p;
class doctor
	{
		char* doctorname;
		char* password;
	public:
		int enter_new_doctor()
			{
				doctor temp;
				fstream fd;
				fd.open ("DD", ios::in | ios::out | ios::binary);
				if (checkauthcode())
					{
						upar:
						cout<<"\n\nEnter Doctor Name : ";
						cin>>doctorname;
						fd.seekg(0);
						while (fd)
							{
								fd.read ((char*)&temp, sizeof(doctor));
								if (!strcmp (temp.doctorname, doctorname))
									{
										cout<<"Doctor Already Exists. \nPlease try again. . . ";
										goto upar;
									}
							}
						fd.seekp(0, ios::end);
						cout<<"\nEnter Password : ";
						cin>>password;
						fd.write ((char*)this, sizeof(doctor));
						cout<<"\nDoctor added to list.";
						fd.close();
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

	}d;

int checkauthcode()
	{
		unsigned long int n;
		int i;
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
								i = 3;
								try1:
								cout<<"Please answer the following question : ";
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
										--i;
										if (!i)
											{
												cout<<"Incorrect Answer 3 times. Redirecting to main menu... ";
												return 0;
											}
										cout<<"\n\nIncorrect answer. "<<i<<" Try(s) Remaining. . .";
										goto try1;
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
	{  fstream fac;
		fac.open ("AC", ios::nocreate | ios::in | ios::out | ios::binary);
		if (!fac)
			{
				fac.open ("AC", ios::in | ios::out | ios::binary);
				ac.ft=1;
				cout<<"\t\t\tWelcome to Checkup Manager 0.1 (Beta)"
					 <<"\n\nNote: This software's administrative rights are managed with \nthe help of a code called AuthCode. You will be asked \nfor AuthCode whenever making singnificant changes in the \nDatabase.;
					 <<"\nPlease Initialize the the AuthCode and Security Questions now.";
		fac.read ((char*)&ac, sizeof(ac));
		if (ac.ft==0)
			{
				cout<<"\n\nEnter AuthCode : ";
				cin>>ac.code;
				cout<<"\nEnter Security Question : ";
				cin.getline (ac.secq, 400);
				cout<<"\nEnter Securty Answer : ";
				cin.getline (ac.seca, 400);
				ac.ft=1;
			}
		fstream fch, fd, fp;
		int success, flag=0, date;
		unsigned long int cardno;
		char ch,*doctorname,*password;
		patient temp;
		fch.open ("PCH", ios::in | ios::out | ios::binary);
		fd.open ("DD", ios::in | ios::out | ios::binary);
		fp.open ("PD", ios::in | ios::out | ios::binary);
		cin>>date;
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
				cout<<"\nYou have been successfully registered";
				break;
			}
			case 1:                                                 // login as doc
			{
				start1:
				cout<<"\nPlease enter username : ";
				cin>>doctorname;
				fd.seekg(0);
				while (fd)
					{
						fd.read ((char*)&d, sizeof(doctor));
						if (d.get_doctor_name()==doctorname)
							{
								flag=1;
							pa1:
							cout<<"Please enter password : ";
							cin>>password;
							if (!strcmp(d.get_password(), password))
								cout<<"\nWelcome Dr. "<<d.get_doctor_name();
							else
								{
									cout<<"Invalid Password.\nPress any key to retry. . .";
									getch();
									goto pa1;
								}
					}
				if (flag == 0)
					{
						cout<<"Doctor not found. Please try again...";
						goto start1;
					}
				ic2:
				fd.seekg(0);
				cout<<"--- Doctor's menu --- \n'1': See doctor history \n'2': Select Patient \n'3': Goto date history \n'4': Goto Main Menu \n '5' New Patient ";
				cin>>ch;
				switch (ch)                                  //Start of Switch 2
					{
						case '5':
							{
								temp.enter_new_patient();
								fp.seekp(0,ios::end);
								fp.write ((char*)&temp, sizeof(patient));
								break;
							}
						case '1':                              // see doc history
							{
								cout<<d.get_doctor_name();
								flag=0;
								while (fch)
									{
										fch.read ((char*)&cu, sizeof(checkup));
										if (!strcmp (cu.getdoctor(),d.get_doctor_name()))
											{
												cu.show_without_doctor();
												flag=1;
											}
									}
								if (flag == 0)
										cout<<"0 record found";
								break;
							}
						case '4':                 // goto main menu
							{
								goto start;
							}                     // Date history
						case '3':
							{
								cout<<"\nEnter Date : ";
								cin>>date;
								flag=0;
								while (fch)
									{
										fch.read ((char*)&cu, sizeof(checkup));
										if (cu.getdate() == date)
											{
												cu.show_without_date();
												flag=1;
											}
									}
								if (flag == 0)
										cout<<"0 record found";
								break;
							}

						case '2':                               //Select Patient
							{
								ic1:
								cu.set (doctorname, date);
								cout<<"Enter card no.";
								cin>>cardno;                  //Check if cardno valid
								cout<<"\nEnter '1' for patients medical history \n'2' for checkup \n'3' to edit patient details \n'4' to return to main menu";
								cin>>ch;
								switch (ch)
									{                                            //Start of switch 3
										case '1':                                //See patient's medical history
											{
												cout<<cardno;
												flag=0;
												while (fch)
													{
														fch.seekg(0);
														fch.read ((char*)&cu, sizeof(checkup));
														if (cu.getcardno() == cardno)
															{
																cu.show_without_cardno();
																flag=1;
															}
													}
												if (flag == 0)
													cout<<"0 record found";
												break;
											}
										case '2':                                 //for checkup
											{
												cout<<"\nEnter medicine : ";
												cu.input_medicine();
												cout<<"\nEnter Remarks : ";
												cin>>cu.remark;
												fch.seekg(0, ios::end);
												fch.write ((char*)&cu, sizeof(checkup));
												break;
											}
										case '4': goto start;
										case '3':
											{
												p.edit_patient_data();
												break;
											}
										default:
											{
												cout<<"Incorrect Input. Press any key to continue . . . ";
												getch();
												goto ic1;
											}
									}  //End of switch 3
							}  //End of case 2
						default :
							{
								cout<<"Incorrect Input. Press any key to continue . . . ";
								getch();
								goto ic2;
							}
						}
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
											if (ch)
												{	fd.close();
													fp.close();
													fch.close();
													fd.open ("DD", ios::trunc);
													fp.open ("PD", ios::trunc);
													fch.open ("PCH", ios::trunc);
													fd.close();
													fp.close();
													fch.close();
													ac.ft=0;
													exit(0);
												}
											break;
										}
									case '2':
										{
											char* docname;
											ch=checkauthcode();
											if (ch)
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
											else
												goto start;

										}
									case '3': goto start;
									case '4':
										{
											if (checkauthcode())
												changeauthcode();
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
					goto start;
				}
		}
}






