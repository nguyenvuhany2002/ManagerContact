#include "contact.h"

// Default constructor
Contact::Contact() {
    name = "";
    phone = "";
}

// Parameterized constructor
Contact::Contact(std::string newName, std::string newPhone) {
    name = newName;
    phone = newPhone;
}

// Member function to set the name
void Contact::setName(std::string newName) {
    name = newName;
}

// Member function to get the name
std::string Contact::getName() const {
    return name;
}

// Member function to set the phone number
void Contact::setPhone(std::string newPhone) {
    phone = newPhone;
}

// Member function to get the phone number
std::string Contact::getPhone() const {
    return phone;
}
