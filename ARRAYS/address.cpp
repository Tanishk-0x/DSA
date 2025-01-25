#include<iostream>
using namespace std ; 
int main () {
    //CREATING ARRAY OF SIZE 5 ...
int arr[5] ; 
//FOR LOOP SE ADDRESS KO PRINT KRAYA HE ....
for(int i = 0 ; i<5 ; i++){
    //ADDRESS KE LIYE  &  KA USE KRTE HE ...
    // JAISE AGR ARRAY KE 4 INDEX KA ADDRESS CHAHIYE TO &arr[4] LIKHENGE ....
    cout<<&arr[i] << endl ; 
}

    return 0 ; 
}