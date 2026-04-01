#include<string>
#include <iostream>
using namespace std;



class Product
{
private:
	string product_name;
	float product_price;

public:
	void setProduct(string product_name, float product_price)
	{
		this->product_name = product_name;
		this->product_price = product_price;
	}

	void displayProduct()
	{
		cout << "Product Name: " << product_name << endl;
		cout << "Product Price: " << product_price << endl;
	}
};




int main()
{

	Product product_obj; 

	string input_name; 
	float input_price;

	cout << "Enter the name of the product: ";
	getline(cin, input_name);

	cout << "Enter the price of the product: ";
	cin >> input_price;


	product_obj.setProduct(input_name, input_price);
	product_obj.displayProduct();

	return 0;


}
