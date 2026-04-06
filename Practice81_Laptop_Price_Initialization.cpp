#include<iostream>
using namespace std;

class Laptop
{
private:
	float laptop_price;

public:
	Laptop(float price);
	void displayPrice();
};

Laptop::Laptop(float price)
{
	laptop_price = price;
}

void Laptop::displayPrice()
{
	cout << laptop_price << endl;
}





int main()
{
	Laptop laptop_1(45000);
	Laptop laptop_2(62000);
	Laptop laptop_3(81000);

	cout << "Laptop 1 Price: ";
	laptop_1.displayPrice();

	cout << "Laptop 2 Price: ";
	laptop_2.displayPrice();

	cout << "Laptop 3 Price: ";
	laptop_3.displayPrice();

	return 0;


}

