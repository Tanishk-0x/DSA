
//INT_MAX AND INT_MIN USED .... FOR THE MAX VALUE WE CAN STORE IN INT DATATYPE. 
#include<iostream>
#include <climits>  //HEADER FOR USING INT_MAX OR MIN ...
using namespace std ; 
int main () {


    int arr[] = {7,5,4,5,6,7,8,9,87,7,66};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MAX;
    int nx = INT_MIN ; 
    cout<< mx << endl ; 
    cout<< nx ; 
    return 0 ; 
}