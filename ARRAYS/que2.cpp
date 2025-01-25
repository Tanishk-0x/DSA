// que = calculate the product of all element in the array given...
#include<iostream>
using namespace std ; 
int main () {
    int product ; 
    int n = 5  ; 
    int arr[n] = {1,2,3,4,5} ; 

    for (int i = 0 ; i<n ; i++){
    product = arr[0]*arr[1]*arr[2]*arr[3]*arr[4]; 
    }
    cout<<product ; 
    return 0 ; 
}