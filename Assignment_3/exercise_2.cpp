

#include "header.h"
#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;



void stringSort(){
   string s;
   cout << "Type in string" << endl;
   getline (cin,s,'\r');
   
  sort(s.begin(), s.end());
  cout << s;
    
}