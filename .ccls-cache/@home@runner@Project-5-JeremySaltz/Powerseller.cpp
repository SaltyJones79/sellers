// implementation file for Powerseller class
#include "Powerseller.h"

Powerseller::Powerseller():Seller() {
  webSite = "";
  soldThisYear = 0;
}

Powerseller::Powerseller(string fName, string lName, string iD, string email,
                         float r, int totSold, string webS, int soldYear)
    : Seller(fName, lName, iD, email, r, totSold) {
  /*firstName = fName;
  lastName = lName;
  userID = iD;
  emailAddress = email;
  rating = r;
  totalItemsSold = totSold;*/
  webSite = webS;
  soldThisYear = soldYear;
}

Powerseller::Powerseller(Powerseller &pS){
  webSite = pS.webSite;
  soldThisYear = pS.soldThisYear;
}

string Powerseller::getWebSite() const{
  return webSite;
}

int Powerseller::getSoldThisYear() const{
  return soldThisYear;
}

void Powerseller::setWebsite(string wSite){
  webSite = wSite;
}

void Powerseller::setSoldThisYear(int soldTyear){
  soldThisYear = soldTyear;
}

void Powerseller::print() const {
  Seller::print();
  
}

void Powerseller::read(){
  
}