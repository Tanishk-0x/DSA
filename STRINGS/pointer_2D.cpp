#include<iostream>
using namespace std ; 
int main () {

int row = 3 ; 
int column = 3 ; 

    int arr[row][column] = {1,2,3,4,5,6,7,8,9}; 

    for(int p = &arr[0][0] ; p<= &arr[row-1][column-1]; p++){
        cout<<*p<<"   "; 
    }



    return 0 ; 
}