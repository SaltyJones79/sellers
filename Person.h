// header file for Person class
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
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

  void setFirstName(string firstN);
  void setLastName(string lastN);
  void setID(string ID);
  void setEmail(string Email);
  void setAllInfo(); // optional

  virtual void print() const;
  virtual void read();

  bool operator==(const Person &p);

  const Person operator=(const Person &p);

  bool operator!=(const Person &p);

  bool operator<(const Person &p);

  bool operator>(const Person &p);

  friend istream &operator>>(istream &is, Person &p) {
    is >> p.firstName >> p.lastName >> p.userID >> p.emailAddress;

    return is;
  }

  friend ostream &operator<<(ostream &os, const Person &p) {
    os << p.firstName << endl
       << p.lastName << endl
       << p.userID << endl
       << p.emailAddress << endl;
    return os;
  }

  ~Person();

protected:
  string firstName;
  string lastName;
  string userID;
  string emailAddress;

private:
};

#endif