// header file for Person class
#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person {
public:

Person();
Person(string fName, string lName, string iD, string email);
Person(Person &p);

string getFirstName() const;
string getLastName() const;
string getID() const;
string getEmail() const;

void setFirstName();
void setLastName();
void setID();
void setEmail();
void setAllInfo();

void print() const;
void read() const;

~Person();

protected:

private:

  string firstName;
  string lastName;
  string userID;
  string emailAddress;
};

#endif