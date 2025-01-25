// ROTATE A SPECIFIC PART BY CHANGING IN i AND j VARIABLES VALUES ...
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
// STARTING POINT ...
int i = 2 ; //SUPPOSE WE HAVE TO ROTATE ARRAY AFTER INDEX 2 UPTO INDEX n-1 ....
// ENDING POINT .....
int j = n-1 ; // i = 2 ; // j = n-1 ; .....

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