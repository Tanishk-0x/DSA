//COUNT THE NUMBER OF ELEMENT IN GIVEN ARRAY GREATER THAN  GIVEN NUMBER X ?

#include<iostream>
using namespace std ; 
int main () {

int x ; 
cout <<"enter number to count : " ; 
cin>> x ; 

int arr[20] = {20,44,66,56,54,87,98,78,55,65,74,76,35,25,105,115};
int count = 0 ; 

for (int i=0 ; i<20 ; i++){
    
    if (arr[i]>x) count++ ; 
}

cout<<"the total element is : "<<" " << count ; 

    return 0 ; 
}