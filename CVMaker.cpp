/*
 *\file CVMaker.cpp
 *\brief implementation des fonctions
*/

#include "CVMaker.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

namespace cvmaker {
 CVMaker::CVMaker() = default;

 /**
  * \brief get the CV Result
  */
 void CVMaker::getCV() {
  cout << "This is your cv: " << endl;
  cout << "First Name: " << firstName << endl;
  cout << "Last Name: " << lastName << endl;
 }

 void CVMaker::postInfos() {
  string input;
  getline(cin, input);
  firstName = input;
  getline(cin, input);
  lastName = input;
 }

}