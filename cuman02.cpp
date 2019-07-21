#include <fstream.h>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <process.h>
#include <math.h>





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
		fstream fac;
		fac.open ("AC.txt", ios::nocreate | ios::in | ios::app | ios::binary);
		fac.read ((char*)&ac, sizeof(authcode));
		ac.code=0;
		int i=0;
		char ch;
		long unsigned int temp;
		cout<<"\n\nEnter New AuthCode : ";
		re2:
		for (; i<6; ++i)
			{
				ch=getch();
				if (isdigit(ch))
					{
						cout<<ch;
						temp = (int)ch-48;
						ac.code = ac.code + temp * pow(10, 5-i);
					}
				else
					goto re2;
			}
		fac.write ((char*)&ac, sizeof(ac));
		fac.close();
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
		int gettime();
		int getdate();
		int getcardno();
		char* getdoctor();
		void input_medicine();
		void show_without_date();
		void show_without_cardno();
		void show_without_doctor();                     //it must have a copy constant function and parameters
		void set(char doctorname[100],int dinank);                                //const taking date, time and docter as peremeter
	}cu;
		int checkup::gettime()
			{ return time; }
		int checkup::getdate()
			{ return date; }
		int checkup::getcardno()
			{ return cardno; }
		char* checkup::getdoctor()
			{ return doctor; }
		void checkup::input_medicine()
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
		void checkup::show_without_date()
			{
				cout<<"\nTime : \t"<<time;
				cout<<"\nCard no. : \t"<<cardno;
				for (int i=0; i<n; i++)
					cout<<"\nMedicine : \t"<< medicine[i].mediname<<" Quantity : "<< medicine[i].quantity;
				cout<<"\nRemarks : \t"<<remark;
				cout<<"\nDoctor : \t" << doctor;
			}
		void checkup::show_without_cardno()
			{
				cout<<"\nDate : \t"<<date;
				cout<<"\nTime : \t"<<time;
				for (int i=0; i<n; i++)
					cout<<"\nMedicine : \t"<< medicine[i].mediname<<" Quantity : "<< medicine[i].quantity;
				cout<<"\nRemarks : \t"<<remark;
				cout<<"\nDoctor : \t" << doctor;
			}
		void checkup::show_without_doctor()                     //it must have a copy constant function and parameters
			{
				cout<<"\nDate : \t"<<date;
				cout<<"\nTime : \t"<<time;
				cout<<"\nCard no : \t"<<cardno;
				for (int i=0; i<n; i++)
					cout<<"\nMedicine : \t"<< medicine[i].mediname<<" Quantity : "<< medicine[i].quantity;
				cout<<"\nRemarks : \t"<<remark;
			}
		void checkup::set(char doctorname[100],int dinank)                                //const taking date, time and docter as peremeters
			{
				date=dinank;
				strcpy(doctor,doctorname);
				cin>>cardno;
				cin>>time;
			}
class patient
	{
		unsigned long int cardno;
		int age;
		int dob;
		char bg[4];
		char name[100];
		char gender;
		char category[100];
	public:
		unsigned long int getcardno();
		void enter_new_patient();
		void show_patient();
		void edit_patient_data();
	}p;


	  unsigned long int patient::getcardno()
			{return cardno;}
	  void patient::enter_new_patient()
			{
				int r=0;
				patient p;
				fstream fp("PD.txt", ios::in|ios::app|ios::binary);
				fp.seekg(0);
				unsigned long int i;
				start:
				cout<<"\n\nEnter card number";
				cin>>cardno;
				while (fp)
					{
						fp.read((char*)&p, sizeof(p));
						if ( p.cardno == cardno )
							{
								cout<<"Patient Already Exist. Redirecting . . . ";
								getch();
								goto start;
							}
					}
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

		void patient::show_patient()
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

		void patient::edit_patient_data()
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


class doctor
	{
		char doctorname[100];
		char password[16];
	public:
		int enter_new_doctor();
		char* get_password();
		char* get_doctor_name();
		void edit_doctor();
	}d;


		int doctor::enter_new_doctor()
			{
				doctor temp1, temp2;
				char ch;
				fstream fd;
				fd.open ("DD.txt", ios::in | ios::app | ios::binary);
				if (checkauthcode())
					{
						upar:
						cout<<"\n\nEnter Doctor Name : ";
						cin>>temp2.doctorname;
						fd.seekg(0);
						while (fd)
							{
								fd.read ((char*)&temp1, sizeof(doctor));
								if (!strcmp (temp1.doctorname, temp2.doctorname))
									{
										cout<<"Doctor Already Exists. \nPlease try again. . . ";
										getch();
										goto upar;
									}
							}
						cout<<"\nEnter Password : ";
						for (int i=0; i<16; i++)
							{
								top:
								ch=getch();
								if ((int)ch==8)
									{
										if(!i)
											goto top;
										cout<<"\b";
										i--;
										goto top;
									}
								if (ch=='\r')
									break;
								temp2.password[i]=ch;
								cout<<"*";
							}
						fd.seekp(0, ios::end);
						fd.write ((char*)&temp2, sizeof(temp2));
						cout<<"\nDoctor added to list.";
						fd.close();
						return 1;
					}
				else
					{
						cout<<"\nIncorrect AuthCode. Redirecting . . . ";
						getch();
						return 0;
					}                               //checked not working write something here like inform him tht he is being redirected
			}
		char* doctor::get_password()
			{ return password; }
		char* doctor::get_doctor_name()
			{ return doctorname; }
		void doctor::edit_doctor()
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


int checkauthcode()                                        //checked working
	{
		fstream fac;
		fac.open ("AC.txt", ios::nocreate | ios::in | ios::app | ios::binary);
		fac.seekg(0);                                       //to be on a safer side
		fac.read ((char*)&ac, sizeof(authcode));
		long unsigned int n;
		int i;
		char str[400];
		char ch;
		codein:
		cout<<"\n\nEnter Authcode : ";
		cin>>n;
		if (ac.code == n )
			{
				cout<<"\nCode Matched";
				return 1;
			}
		else
			{
				cout<<"\nCode Invalid!"
					 <<"\n\nEnter '0' to answer security questions."
					 <<"\n\nEnter '1' to try again ... ";
				ch=getche();
				getch();
				switch(ch)
					{
						case '1': goto codein;
						case '0':
							{
								i = 3;
								try1:
								clrscr();
								cout<<"\n\nPlease answer the following question : "<<endl;
								cout<<"Q : "<<ac.secq<<endl<<"A : ";
								gets(str);
								if (!strcmp(str,ac.seca))
									{
										cout<<"\nSuccess."
											 <<"\n\nAuthCode : "
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
												getch();
												clrscr();
												return 0;
											}
										cout<<"\n\nIncorrect answer. "<<i<<" Try(s) Remaining. . .";
										getch();
										goto try1;
									}
							}
						default :
							{
								cout<<"\n\nInvalid Input. Redirecting...";
								getch();
								clrscr();
								goto codein;
							}
					}
			}
	}




void main()
	{
		restart:
		fstream fac;
		fac.open ("AC.txt", ios::nocreate | ios::in | ios::app | ios::binary);
		if (!fac)                                                //checked working
			{
				long unsigned int temp; int i;  char ch;
				cout<<"\t\t\tWelcome to Checkup Manager 0.1 (Beta)"
					 <<"\n\nNote: This software's administrative rights are managed with \nthe help of a code called AuthCode. You will be asked \nfor AuthCode whenever making singnificant changes in the Database."
					 <<"\n\nPlease Initialize the the AuthCode and Security Question now.";
				rein:
				ac.code=0;
				i=0;
				cout<<"\n\nEnter a 6 digit AuthCode : ";
				re:
					for (; i<6; ++i)
						{
							ch=getch();
							if (isdigit(ch))
								{
									cout<<ch;
									temp = (int)ch-48;
									ac.code = ac.code + temp * pow(10, 5-i);
								}
							else
								goto re;
						}
				cout<<"\n\nEnter Security Question : ";
				gets (ac.secq);
				cout<<"\nEnter Securty Answer : ";

				gets (ac.seca);
				ac.ft=1;
				fac.open ("AC.txt", ios::in | ios::app | ios::binary);
				clrscr();
				cout<<"\n\n\t\t\t Confirmation "
					 <<"\nAuthCode : "<<ac.code
					 <<"\nQuestion : "<<ac.secq
					 <<"\nAnswer : "<<ac.seca
					 <<"\n\nPress [TAB] to change. \nPress any key to continue . . .";
				ch=getch();
				if (ch=='\t')
					{
						clrscr();
						goto rein;
					}
				else
					fac.write ((char*)&ac, sizeof(authcode));
				clrscr();
				fac.close();
			}
		fstream fch, fd, fp;
		int success, flag=0, date;
		unsigned long int cardno;
		char ch, doctorname[100], password[16];
		patient temp;
		fch.open ("PCH.txt", ios::in | ios::app | ios::binary);
		fd.open ("DD.txt", ios::in | ios::app | ios::binary);
		fp.open ("PD.txt", ios::in | ios::app | ios::binary);
	start:
		cout<<"\n\n\t\t\t--- Main Menu --- \n\nPress '1' to login doctor \nPress '2' to login as new doctor \nPress '3' to change settings \nPress '4' to exit"<<endl<<endl;
		ch=getch();
		clrscr();
		switch(ch)               //Start of switch 1
		{
			case '2':                                                 //login as new doc
			{
				success= d.enter_new_doctor();
				if (success==0)
					break;
				cout<<"\nYou have been successfully registered";
				getch();
				goto start;
			}
			case '1':                                                 // login as doc
			{
				flag=0;
				start1:
				cout<<"\nPlease enter username : ";
				cin>>doctorname;
				fd.seekg(0);
				while (fd)
					{
						fd.read ((char*)&d, sizeof(doctor));
						if (!strcmp(d.get_doctor_name(),doctorname))
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
				clrscr();
				cout<<"\t\t\t--- Doctor's menu --- \t Logged in as Dr. "<<d.get_doctor_name()<<"\n'1': See doctor history \n'2': Select Patient \n'3': Goto date history \n'4': Goto Main Menu \n'5' New Patient ";
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
				case '3':                                         //checked not working
						{
							settings:
							cout<<"\t\t\t--- Settings ---";
							cout<<"\n\n1. Reset Database. \n2. Change Doctor Details. \n3. Exit. \n4. Change Authcode.";
							ch=getch();
							switch (ch)
							{
									case '1':
										{
											if (checkauthcode())
												{
													cout<<"\n\nResetting Database will PERMANENTLY DELETE ALL RECORDS STORED. Are you sure? [Y/N] : ";
													re1:
													ch=getch();
													if (ch=='Y' || ch=='y')
														{
															fd.close();
															fp.close();
															fch.close();
															fac.close();
															remove ("AC.txt");
															remove ("PD.txt");
															remove ("DD.txt");
															remove ("PCH.txt");
															clrscr();
															cout<<"\n\n\tDATABASE CLEANED. ALL FILES DELETED. PRESS ANY KEY TO RESTART . . .";
															getch();
															clrscr();
															goto restart;
														}
													else
														{
															clrscr();
															goto start;
														}
												}
											break;
										}
									case '2':
										{
											char* docname;
											if (checkauthcode())
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
									case '3':
										{
											clrscr();
											goto start;
										}
									case '4':
										{
											if (checkauthcode())
												changeauthcode();
											cout<<"\nNew AuthCode Saved. \nPress any key to continue . . .";
											getch();
											clrscr();
											goto start;
										}
									default :
										{
											cout<<"Invalid Input. Please try again...";
											goto settings;
										}
							}

						}
					 default:                                       //checked working
						{
							cout<<"Incorrect Input. Press any key to continue . . . ";
							getch();
							clrscr();
							goto start;
						}
					case '4':                                       //checked working
						{
						fd.close();
						fp.close();
						fch.close();
						exit(0);
						}
					}

				}
			goto start;
		}
		goto start;
	}






