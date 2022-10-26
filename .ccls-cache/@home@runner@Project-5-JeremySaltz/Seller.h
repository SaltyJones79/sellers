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

protected:
  float rating;
  int totalItemsSold;

private:
};

#endif