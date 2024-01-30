#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "contact.h"

using namespace std;
// Hàm để xuất danh bạ ra màn hình
void displayContacts(const vector<Contact>& contacts) {
	if (!contacts.empty())
	{
		for (const auto& contact : contacts) {
			cout << "ten: " << contact.getName() << "\tsoDienThoai: " << contact.getPhone() << endl;
		}
	}
	else
	{
		cout << "Contacts is Empty " << endl;
	}

}

// Hàm để lưu danh bạ vào tệp văn bản
void saveContactsToFile(const vector<Contact>& contacts, const string& filename) {
	ofstream outFile(filename);

	if (outFile.is_open()) {
		for (const auto& contact : contacts) {
			outFile << contact.getName() << "\n" << contact.getPhone() << endl;
		}
		cout << "Contacts saved to " << filename << endl;
		outFile.close();
	}
	else {
		cerr << "Unable to open file: " << filename << endl;
	}
}

int main() {
	vector<Contact> contacts;
	string choice;
	string name;
	string phone;
	Contact newContact;
	string filename = "contact.txt";

	do {
		cout << "1. Add Contact\n";
		cout << "2. Display Contacts\n";
		cout << "3. Save Contacts to File\n";
		cout << "4. Quit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == "1") {
			cout << "Enter Name: ";
			cin >> name;
			newContact.setName(name);
			cout << "Enter Phone Number: ";
			cin >> phone;
			newContact.setPhone(phone);
			contacts.push_back(newContact);
		}
		else if (choice == "2") {
			displayContacts(contacts);
		}
		else if (choice == "3") {
			cout << "Enter file name to save: ";
			cin >> filename;
			saveContactsToFile(contacts, filename);
		}
		else if (choice == "4") {
			cout << "Goodbye!\n";
			saveContactsToFile(contacts, filename);
		}
		else {
			cout << "Invalid choice. Please try again.\n";
		}

	} while (choice != "4");

	return 0;
}
