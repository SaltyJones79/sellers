// header file for Powerseller class
#ifndef POWERSELLER_H
#define POWERSELLER_H
#include "Seller.h"

class Powerseller : public Seller {

public:
  Powerseller();
  Powerseller(string fName, string lName, string iD, string email, float rate,
              int totSold, string webS, int soldYear);
  Powerseller(Powerseller &pS);

  string getWebSite() const;
  int getSoldThisYear() const;

  void setWebsite(string wSite);
  void setSoldThisYear(int soldTyear);

  virtual void print() const;
  virtual void read();

  friend istream &operator>>(istream &is, Powerseller &pS) {

    is >> pS.firstName >> pS.lastName >> pS.userID >> pS.emailAddress >>
        pS.rating >> pS.totalItemsSold >> pS.webSite >> pS.soldThisYear;

    return is;
  }

  friend ostream &operator<<(ostream &os, Powerseller &pS) {
    os << "First name: "<< pS.firstName << endl
       <<"Last name: "<< pS.lastName << endl
       <<"User Id: " << pS.userID << endl
       <<"Email Address: " << pS.emailAddress << endl
       <<"Rating: " << pS.rating << endl
       <<"Total Items sold: " << pS.totalItemsSold << endl
       <<"Website: " << pS.webSite << endl
       <<"Items sold this year: " << pS.soldThisYear << endl;

    return os;
  }

protected:
private:
  string webSite;
  int soldThisYear;
};
#endif