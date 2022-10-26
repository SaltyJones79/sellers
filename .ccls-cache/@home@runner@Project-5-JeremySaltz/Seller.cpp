// implementation file for Seller class
#include "Seller.h"
#include <iostream>


Seller::Seller() : Person() {
  rating = 0.0;
  totalItemsSold = 0;
}

Seller::Seller(string fName, string lName, string iD, string email, float r,
               float totSold)
    : Person(fName, lName, iD, email) {
  rating = r;
  totalItemsSold = totSold;
}

Seller::Seller(const Seller &s){
  rating = s.rating;
  totalItemsSold = s.totalItemsSold;
}

float Seller::getRating() const {
  return rating;
}

int Seller::getTotalItemsSold() const {
  return totalItemsSold;
}

void Seller::setRating(float rate){
  rating = rate;
}

void Seller::setTotalItemsSold(int totIsold){
  totalItemsSold = totIsold;
}

void Seller::print() const{
  Person::print();
  cout << rating << endl;
}

void Seller::read(){}