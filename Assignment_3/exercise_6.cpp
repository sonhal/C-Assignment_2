
#include "header.h"
#include <iostream>
#include <string>


using namespace std;

void reverseIntPointer(){
    
    int a[] = {1,2,3,4,5};
    int  * p[5];
    
    for(int i = 0; i < 5; i++){
        
        p[i] = &a[i];
    }
    
    for(int i = 4; i >= 0; i--){
        
      cout <<  *p[i] << " , ";
    }
}