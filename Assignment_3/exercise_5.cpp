
#include "header.h"
#include <iostream>
#include <string>


using namespace std;


void intPointer(){
    
    int a,b,c,d,e;
    int *ap[5];
    
    ap[0] = &a;
    ap[1] = &b;
    ap[2] = &c;
    ap[3] = &d;
    ap[4] = &e;
    
    
    cout << "type int to save " << endl;
    
    for(int i = 0; i < 5; i++){
     cout << "type int " << i << endl;
     cin >> *ap[i]; 
        
    }
    cout << "Here are the integers = " << endl;
    for(int i = 5; i > 5; i++){
     cout << *ap[i] << " , ";
    }
    
}