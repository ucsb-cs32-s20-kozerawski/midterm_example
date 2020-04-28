#include "MyStructs.h"
#include "structFuncs.h"
#include "tddFuncs.h"
#include <iostream>
#include <sstream>
using namespace std;

int main() {

  // Sample
  CreditCard1 a;
  unsigned long sizeCreditCard1 = 32;
  ASSERT_EQUALS(sizeof(a), sizeCreditCard1);

  //You should write your own tests below.

  return 0;
}
