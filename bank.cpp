#include<iostream>
using namespace std;

class Bank
{
	int ac_no,account;
	float balance;
	char name[20];
	public:
		void open();
		void deposite(int);
		void withdraw(int);
		void searchs(int);
		void display();
};
void Bank::open()
{
	cout<<"ENTER YOUR NAME : ";
	cin>>name;
	cout<<"ENTER YOUR BANK ACCOUNT : ";
	cin>>account;
	cout<<"ENTER THE AMOUNT OF MONEY : BDT ";
	cin>>balance;
}
void Bank::deposite(int j)
{ 
int bno;
if(account==j)
{
	cout<<"ENTER THE AMOUNT OF MONEY : BDT";
	cin>>bno;
	balance=balance+bno;
	cout<<"JOB HAS DONE WELL!!!\n";
}
	
}
void Bank::withdraw(int k)
{
	int bino,p;
	if(account == k)
	{
		cout<<"YOUR CURRENT ACCOUNT BALANCE IS BDT "<<balance<<endl;
		cout<<"THE AMMOUNT OF MONEY YOU WANT TO WITHDRAW "<<endl;
		cin>>bino;
	    p=balance-bino;
	    if(p<0)
	    {
	    	cout<<"SOORY!!! THERE IS NOT ENOUGH MONEY IN YOUR ACCOUNT\n";
		}
		else if(p>=0)
		{
			cout<<"\nYOUR REQUEST TO WITHDRAW MONEY HAS DONE\n";
		}
	}
}
void Bank::display(void)
{
 cout<<"NAME : "<<name<<endl;
 cout<<"ACCOUNT NO. : "<<account<<endl;
 cout<<"BALANCE : BDT "<<balance<<endl;
}
void Bank::searchs(int m)
{
	if(account==m)
	{
		cout<<"\n********** Account Holder's INFO**********"<<endl;
		cout<<"NAME : "<<name<<endl;
 cout<<"ACCOUNT NO. : "<<account<<endl;
 cout<<"BALANCE : BDT "<<balance<<endl;
 cout<<"************************************************"<<endl;
	}
}
int main()
{
	int i,j,k,m,l,y=0;
	Bank b[20];
	int index;
	do
	{
		cout<<"\nPRESS 1 TO OPEN ACCOUNT\n";
		cout<<"\nPRESS 2 TO DEPOSITE AMOUNT\n";
		cout<<"\nPRESS 3 TO WITHDRAW MONEY\n";
		cout<<"\nPRESS 4 TO DISPLAY\n";
		cout<<"\nPRESS 5 TO SEARCH\n";
		cout<<"\nPRESS 6 TO EXIT\n";
		cin>>index;
		switch(index)
		{
			case 1:{
				cout<<"HOW MANY ACCOUNT YOU WANT TO OPEN\n";
				cin>>y;
				for(i=0;i<y;i++)
				b[i].open();
				cout<<"Account created successfully"<<endl;
				break;
		}
		case 2:
			{cout<<"\nEnter your ACCOUNT NO.";
			cin>>j;
			for(i=0;i<y;i++)
			{
				b[i].deposite(j);
			}
			break;
			}
		case 3:
			{
				cout<<"\nENTER YOUR ACCOUNT NO.";
				cin>>k;
				for(i=0;i<y;i++)
				{
					b[i].withdraw(k);
				}
				break;
			}
			case 4:
				{
					for(i=0;i<y;i++)
					{
						b[i].display();
					}
					break;
				}
				case 5:
					{
						cout<<"ENTER YOUR ACCOUNT NO. ";
						cin>>m;
						for(i=0;i<y;i++)
						{
							b[i].searchs(m);
						}
						break;
					}
					default:
						{
							cout<<"YOU HAVE PRESSED THE WRONG KEY. PLEASE TRY AGAIN\n";
							break;
						}
	}
}while(i);
}
