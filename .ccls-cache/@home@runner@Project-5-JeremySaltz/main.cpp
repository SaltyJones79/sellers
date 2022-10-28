// if late, give reason and pass # here
/*
 PROGRAMMER:       	Your name
 Program Description:
  Description of what assignment does/produces/performs/....
  Description of what program input is and form.......
  Description of what program output is and form.......
*/
#include "Person.h"
#include "Powerseller.h"
#include "Seller.h"
#include <cassert>
#include <fstream>
//#include <iostream>
#include <list>

// some prototype for file reading
void initialize(ifstream &in, Seller *s, Powerseller *pS, list<Seller *>&aS);

int main() {
  ifstream myIn;
  char rank;

  myIn.open("sellers.dat");
  assert(myIn);

  Seller *sptr;
  sptr = new Seller;

  Powerseller *psPtr;
  psPtr = new Powerseller;

  list<Seller *> allSellers;

  // Powerseller test("Sam", "Johnson", "SJonhson21", "Johnson@email.com", 3.6,
  // 230, "Website.com", 34);

  // cout << test;

  initialize(myIn, sptr, psPtr, allSellers);
  
  list<Seller *>::iterator itr;

  
  for (itr = allSellers.begin(); itr != allSellers.end(); itr++) {
    (*itr)->print();
    cout << endl;
  }

  myIn.close();
  return 0;
}

void initialize(ifstream &in, Seller *s, Powerseller *pS, list<Seller *>&aS){
  
  char rank;
  
  while (!in.eof()) {
    in >> rank;
    if (rank == 'S') {
      in >> *s;
      aS.push_back(s);
      s = new Seller;  
    } else if (rank == 'P') {
      in >> *pS;
      aS.push_back(pS);
      pS = new Powerseller;
    }
  }
}