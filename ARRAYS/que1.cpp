// que = calculate the sum of all element in the array given...

#include<iostream>
using namespace std ; 
int main () {
 int sum = 0 ; 
     int arr[7] = {2,1,2} ;
    //  int n = siz,1,2,2,2eof(arr) / sizeof(arr[0]) ;
    
    for(int i=0 ; i<7 ; i++){
    sum += arr[i] ; 
    }
cout<<sum ; 
    return 0 ; 
}