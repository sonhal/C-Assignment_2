
#include "header.h"
#include <iostream>
#include <string>

#include <vector>


using namespace std;

void vectorTripler(){
    
    vector<int> v(15);
     
    
    
    for(int i = 0; i < 15; i++){
        int k = 1;
        v[i] = k;
    }
   
    for(int i = 0; i < 15; i++){
        cout << v[i] << " , ";
    }
    for(int i = 0; i < 15; i++){
        int k = v[i];
        k = k * 3;
        
        v[i] = k;
    }
      cout << endl << "Tripeled = " << endl;
    for(int i = 0; i < 15; i++){
        cout << v[i] << " , ";
    }
     
     
}