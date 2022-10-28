// implementation file for Person class
#include "Person.h"

Person::Person() {
  firstName = "";
  lastName = "";
  userID = "";
  emailAddress = "";
}

Person::Person(string fName, string lName, string iD, string email) {
  firstName = fName;
  lastName = lName;
  userID = iD;
  emailAddress = email;
}

Person::Person(Person &p) {
  firstName = p.firstName;
  lastName = p.lastName;
  userID = p.userID;
  emailAddress = p.emailAddress;
}

Person::~Person() {}

string Person::getFirstName() const { return firstName; }

string Person::getLastName() const { return lastName; }

string Person::getID() const { return userID; }

string Person::getEmail() const { return emailAddress; }

void Person::setFirstName(string firstN) { firstName = firstN; }

void Person::setLastName(string lastN) { lastName = lastN; }

void Person::setID(string ID) { userID = ID; }

void Person::setEmail(string Email) { emailAddress = Email; }

void Person::print() const {
  cout << firstName << endl;
  cout << lastName << endl;
  cout << userID << endl;
  cout << emailAddress << endl;
}

void Person::read() {}

bool Person::operator==(const Person &p) {
  if (firstName == p.firstName && lastName == p.lastName &&
      emailAddress == p.emailAddress)
    return true;
  else
    return false;
}

bool Person::operator!=(const Person &p) {
  if (firstName != p.firstName && lastName != p.lastName)
    return true;
  else
    return false;
}

const Person Person::operator=(const Person &p) {

  if(this == &p)
    return *this;
  
    this->firstName = p.firstName;
    this->lastName = p.lastName;
    this->userID = p.userID;
    this->emailAddress = p.emailAddress;
  
  return *this;
}

bool Person::operator<(const Person &p) {
  if (lastName < p.lastName)
    return true;
  else
    return false;
}

bool Person::operator>(const Person &p) {
  if (lastName > p.lastName)
    return true;
  else
    return false;
}