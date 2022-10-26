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
#include <iostream>
#include <list>

int main() {
  ifstream myIn;

  Seller *sptr;
  sptr = new Seller;

  Powerseller *pstr;
  pstr = new Powerseller;

  list<Seller *> allSellers;

  return 0;
}