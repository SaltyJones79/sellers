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
  list<Seller *>::iterator itr;

  while (!myIn.eof()) {
    myIn >> rank;
    if (rank == 'S') {
      myIn >> *sptr;
      cout << *sptr << endl;
      allSellers.push_back(sptr);
      sptr = new Seller;  
    } else if (rank == 'P') {
      myIn >> *psPtr;
      cout << *psPtr << endl;
      allSellers.push_back(psPtr);
      psPtr = new Powerseller;
    }
  }
  for (itr = allSellers.begin(); itr != allSellers.end(); itr++) {
    (*itr)->print();
    cout << endl;
  }

  myIn.close();
  return 0;
}