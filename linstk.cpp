# include<fstream.h>
# include<iostream.h>
# define size 5

class stk
{
	int data[size];
	int top;

	public:

	stk()
	{
	top=-1;
	}

	void init()
	{
	top=-1;
	}

	int push(int nw)
		{
		 if(top<(size-1))
			{
			top++;
			data[top]=nw;
			return 1;
			}
		else
			return 0;
		}

	int pop(int &deleted)
		{
		if(top<0)
			return 0;
		else
			{
			deleted=data[top];
			top--;
			return 1;
			}
		}

	int traverse()
		{
		if(top<0)
			return 0;
		else
			{
			cout<<endl<<"Displaying stack elements.\n";
			for(int i=0;i<=top;i++)
				cout<<data[i]<<'\t';
			cout<<endl<<endl;
			return 1;
			}
		}

};


void main()
{
fstream file("LINSTK.dat",ios::binary | ios::in | ios::out);
char ch;
stk array;
int temp,check;
file.seekg(0);
file.read((char*)&array,sizeof(array));

start:

cout<<"Enter\n'1' for push,\n'2' for pop,\n'3' for traverse,\n'4' for reset,\n'5' for quit.\n\n";
cin>>temp;
cout<<endl<<endl;

switch(temp)
{
case 1:cout<<"Enter element : ";
		 cin>>temp;
		 check=array.push(temp);
		 if(check)
				cout<<"Push successful.\n\n";
		 else
				cout<<"Push unsuccessful.\n\n";
		 break;
case 2:check=array.pop(temp);
		 if(check)
				cout<<"Pop successful. "<<temp<<" has been deleted.\n\n";
		 else
				cout<<"Pop unsuccessful.\n\n";
		 break;
case 3:check=array.traverse();
		 if(!check)
				cout<<"Traverse is not possible. Array is empty.\n\n";
		 break;

case 4:array.init();
		 cout<<"Stack successfully resetted.\n\n";
		 break;

case 5:goto end;

default:cout<<"! ! ! ! ! WRONG CHOICE ! ! ! ! !\n\n";

}

cout<<"Enter any key to TRY AGAIN.";
cin>>ch;
cout<<endl<<endl;

goto start;

end:

file.seekp(0);
file.write((char*)&array,sizeof(array));
file.close();
cout<<"\n\nStack stored successfully.";

}
