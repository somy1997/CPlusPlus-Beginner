#include<iostream.h>
#include<stdio.h>
class Person
{
char name[25] ;
int age ;
public :
void readperson(void) ;
void displayperson(void) ;
{
cout<< "Name : " ;
cout.write(name,25) ;
cout<< "\tAge : " << age << "\n";
}
};
void Peson::readperson(void)
{
for(int i=0;i<25;i++)
name[i] = '';
cout<<"Please enter the name of the person : " ;
gets(name);
cout<< "Please enter the age : " ;
cin>>age ;
}
class Student : public Person
{
int rollno ;
float average ;
public :
void readstudent(void)
{
readperson() ;
cout<<"Please enter the roll number of the person : " ;
cout<<"Please enter the average marks of the person : " ;
}
void disp_rollno(void)
{
cout<<"Roll Number : " <<rollno<< "\n";
}
float getaverage(void)
{
cout<< "Roll Number : "<<rollno<< "\n";
floatgetaverage(void)
{
return average ;
}
};
class GradStudent : public student
{
char subject[25] ;
char working ;
public :
void readit(void) ;
void displaysubject(void)
{
cout<<"Subject : " ;
cout.write(subject,25);
}
char workstatus(void)
{
return working ;
}
};
void GradStudent::readit(void)
{
readstudent();
for(int i=0; i<25 ; i++ )
subject[i] = '' ;
cout<<"Please enter main subject : " ;
gets(subject) ;
cout<<"Working ? (Y/N) : " ;
cin>>working ;
}
int main()
{
const int size =5 ; // size stores of graduates
GradStudent grad[size] ;
int year ,num_working =0, non_working=0, div1=0,total=0;
float topscore=0,score,numjber,wperc,nwperc;
// num_working = number of working graduates
// non_working = number of non working graduates
// div1 = number of first divisioners
// total = total number of graduates
// topscore = highest average
// score = aveage of the graduate student
// number = number of the graduates in the list
cout<< "Please enter the year : " ;
cin>>year ;
for(int i=0 ; i<size ; i++)
{
cout<<"Please enter the details of the graduate"<<(i+1)<<"\n";
grad[i].readit() ;
total++ ;
if((grad[i].workstatus()=='y')||(grad[i].workstatus=='Y'))
num_working++ ;
else
non_working++ ;
score = grad[i].getaverage();
if(score>topscore)
{
topscore= score ; number = i;
if(score>=60.0)
{
div++;
}
}
i=number;
cout<<"\n"<<"\t\tReport for the year "<<year <<"\n";
cout<<"\t\t-----------\n";
cout<<"Working Graduates : "<<num_working<<"\n" ;
cout<<"Non_working Graduates : "<<non_working<<"\n";
cout<<"\tDetails of the top scorer \n";
grad[i].displayperson();
grad[i].displaysubject();
nwperc =((float)non_working/(float)total)*100;
wperc  =((float)div1/(float)total)*100;
cout<<"\tAverage Marks : "<<grad[i].getaverage()<<"\n";
cout<<"\t"<<nwperc<<"% of the graduates this year are non_working and \n";
cout<<"\t"<<wperc<<"% are first divisoners\n" ;
return 0 ;
}








