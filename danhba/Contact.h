#pragma once
#include <string>

class Contact {
public:
    // Default constructor
    Contact();

    // Parameterized constructor
    Contact(std::string newName, std::string newPhone);

    // Member function to set the name
    void setName(std::string newName);

    // Member function to get the name
    std::string getName() const;

    // Member function to set the phone number
    void setPhone(std::string newPhone);

    // Member function to get the phone number
    std::string getPhone() const;

private:
    std::string name;
    std::string phone;
};

