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

protected:
private:
  string webSite;
  int soldThisYear;
};
#endif