#include<iostream>
using namespace std ; 

// FUNCTION .............
int length(char name[]){
    int count = 0 ; 
    // LOOP JAB TAK CHALAYENGE JAB TAK NULL CHARACTER NA AA JAYE .......
    for(int i = 0 ; name[i] != '\0' ; i++){
        count++ ; 
    }
    cout<<count ; 
    return count ; 
    
}


// MAIN FUNCTION SE CALL LAGAYENGE ......
int main () {
    char name[20] ; 
    cout<<"enter characters : " ; 
    cin>> name ; 
    cout<<"length is : " ; 
    // FUNCTION CALLL .........
    length(name) ; 
}