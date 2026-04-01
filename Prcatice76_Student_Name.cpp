#include<string>
#include <iostream>
using namespace std;


class Student
{
private:
	string student_name;

public:
	Student();

	void displayName();
};

Student::Student()
{
	student_name = "Unknown";

}

void Student::displayName()
{
	cout << "Student Name is: " << student_name << endl;
}





int main()
{

	Student student_obj;

	student_obj.displayName();

	return 0;


}

