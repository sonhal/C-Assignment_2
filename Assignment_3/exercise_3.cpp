
#include "header.h"
#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;


void intHolder(){
    
    int a[20];
    int k;
    int counter = 0;
    
    for(int i = 0; i < 20 ; i++){
        cout << "type integer for array number = " << i << endl;
        cin >> a[i];
    }
    for(int i = 0; i < 20 ; i++){
        cout << "Integer for array number = " << i << " is = " << a[i] << endl;
      
    }
    cout << "type and integer to search the array for" << endl;
    cin >> k;
    for(int i = 0; i < 20 ; i++){
        if(a[i] == k){
            counter++;
        }
    }
    cout << "The number of integer = " << k << " in this array is = " << counter;
    
}