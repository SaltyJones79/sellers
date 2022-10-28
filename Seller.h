// header file for Seller class
#ifndef SELLER_H
#define SELLER_H
#include "Person.h"

class Seller : public Person {
public:
  Seller();
  Seller(string fName, string lName, string iD, string email, float r,
         float totSold);
  Seller(const Seller &s);

  float getRating() const;
  int getTotalItemsSold() const;

  void setRating(float rate);
  void setTotalItemsSold(int totIsold);

  virtual void print() const;
  virtual void read();

  friend istream &operator>>(istream &is, Seller &s) {
    is >> s.firstName >> s.lastName >> s.userID >> s.emailAddress >> s.rating >>
        s.totalItemsSold;

    return is;
  }

  friend ostream &operator<<(ostream &os, Seller &s) {

    os <<"First name: "<<  s.firstName << endl
       <<"Last name: "<< s.lastName << endl
       <<"User Id: " << s.userID << endl
       <<"Email Address: "<< s.emailAddress << endl
       <<"Rating: " << s.rating << endl
       <<"Total Items Sold: " << s.totalItemsSold << endl;

    return os;
  }

protected:
  float rating;
  int totalItemsSold;

private:
};

#endif