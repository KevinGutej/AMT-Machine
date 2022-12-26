#include <iostream> 
using namespace std; 

void showMenu()
{
	cout << "**********MENU**********" << endl;
	cout << endl;
	cout << "[1] - Check Balance" << endl;
	cout << "[2] - Deposit" << endl;
	cout << "[3] - Withdraw" << endl;
	cout << "[4] - Exit" << endl;
	cout << endl;
	cout << "************************" << endl;
}

int main() 
{ 
	int Useroption;
	double balance = 100;
	
	showMenu();
	
	cout << "Please choose a option: " << endl;
	cin >> Useroption;
	do {
		switch(Useroption)
		{
			case 1:
				cout << "Your balance is: " << balance << "$" << endl;
			break;
			
			case 2:
				double depositAmount;
				cout << "Deposit amount: ";
				cin >> depositAmount;
				balance += depositAmount;
				cout << "Your new balance is: " << balance << "$" << endl;
				break;
			
			case 3:
				double withDrawMoney;
				cout << "WithDraw amount: ";
				cin >> withDrawMoney;
				if(withDrawMoney <= balance)
				{
					balance -= withDrawMoney;
					cout << "Your new balance is: " << balance << "$" << endl;
				}
				else {
					cout << "Not enought money" << endl;
				}
				break;		
		}
	}while(Useroption == 1 || Useroption == 2 || Useroption == 3 || Useroption == 4);
	
	
	return 0; 
} 
