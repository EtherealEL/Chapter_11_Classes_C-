
#include <iostream>
using namespace std;

class BankAccount
{
private:
	float balance;

public:
	BankAccount(float bal);
	
	void displayBalance();
};

BankAccount::BankAccount(float bal)
{
	balance = bal;
}

void BankAccount::displayBalance()
{
	cout << balance << endl;
}






int main()
{

	BankAccount account_1(500);
	BankAccount account_2(1200);
	BankAccount account_3(50);

	cout << "Account 1 Balance: ";
	account_1.displayBalance();

	cout << "Account 2 Balance: ";
	account_2.displayBalance();

	cout << "Account 3 Balance: ";
	account_3.displayBalance();


	return 0;
}
