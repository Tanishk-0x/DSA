// WRITE A PROGRAMM TO EVERSE THE ARRAY WITHOUT USING ANY EXTRA ARRAY ? 

#include<iostream>
using namespace std ; 
int main () {
// EXTREMES KO SWAP KRTE RAHENGE ....

int arr[] = {10,20,30,40,50};
int n = sizeof(arr) / 4 ;  

for (int i=0 ; i<n ; i++){
cout<<arr[i]<<"  " ; 
}
cout<<endl ; 

int i = 0 ; 
int j = n-1 ; 

while(i<j){
    // SWAP FUNCTION SE SWAP KR DENGE EXTREME ELEMENTS KO ..
    swap(arr[i] , arr[j]); 
    i++; 
    j-- ;
}
for (int i=0 ; i<n ; i++){
cout<<arr[i]<<"  " ; 
}


    return 0 ; 
}