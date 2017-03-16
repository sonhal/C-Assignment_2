

#include "header.h"
#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;


void upInN(){
    int n;
    cout << "type a number to calculate n^n" << endl;
    cin >> n;
   
    
    int sum = n;
    for(int i = 1; i < n; i++){
        
        sum = sum * n;
    }
    cout << "The result is : " << sum; 
   
}