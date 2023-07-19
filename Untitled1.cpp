#include<iostream>
#include<string>
using namespace std;
string name;
int choice;

class display
{
	public :
		display()
		{
		cout<<"          ------------ MARUTI FAST FOOD ------------          \n\n"<<endl;
		cout<<"Hello Sir/Madam , Enter your Name : ";
		getline(cin,name);
		cout<<endl<<"Welcome "<<name<<endl;
		}
		void menu()
		{
			cout<<"\n\nWhat would you like to order sir ?"<<endl;
			cout<<"\n\n          ------- MENU -------           \n"<<endl;
			cout<<"1. Pizza \n2. Burgers \n3. Sandwich \n4. Fries \n5. Biryani \n 6. Chinese \n\n\n";
			cout<<"Please enter your choice : ";
			cin>>choice;
		}
};

int main()
{
	string rep;
	display d;
	do 
	{
		d.menu();
	cout<<"Would you like to order anything else ?(yes or no) : ";
	cin>>rep;
	}while(rep == "Yes" || rep == "yes");
}