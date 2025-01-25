#include<iostream>
using namespace std ; 
int main () {
 //ARRAY CREATE KARA HE .....
  int arr[5] ; 
//LOOP LAGAYENGE INDEX ME VALUE KO INPUT KRNE KE LIYE ...

for (int i=0 ; i<=4 ; i++){
    cin>>arr[i] ; 
}

//LOOP SE VALUE KO PRINT KARAYENGE .....

for (int i=0 ; i<=4 ; i++){
    cout<<arr[i]<<endl  ; 
}
    return 0 ; 
}