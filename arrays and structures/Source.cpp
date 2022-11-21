#include <iostream>
using namespace std;

struct PhoneRecord
{
	char FirstName[20];
	char LastName[20];
	char PhoneNumber[15];
	char MobileNumber[15];
};

void main()
{
	cout << "How many records you want to store?";
	int size;
	cin >> size;

	PhoneRecord* records = new PhoneRecord[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Please enter first name: ";
		cin >> records[i].FirstName;
		cout << "Please enter last name: ";
		cin >> records[i].LastName;
		cout << "Please enter phone number: ";
		cin >> records[i].PhoneNumber;
		cout << "Please enter mobile number: ";
		cin >> records[i].MobileNumber;
	}

	cout << endl << endl << "Printing all records: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "First name: " << records[i].FirstName
			<< ", Last name: " << records[i].LastName
			<< ", Phone number: " << records[i].PhoneNumber 
			<< ", Mobile number: "<< records[i].MobileNumber << endl;
	}
}