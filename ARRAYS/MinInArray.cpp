#include<iostream>
#include<climits>
using namespace std ; 
int main () {
 // ARRAY LO DECLARE + INITIALISED KRA HE ....
 int arr[20] = { 1,2,3,4,5,6,7,8,9};
 //EK VARIABLE CREATE KRA HE USKO ARR[0] LE EQUATE KR DIIYA HE ...
 int mx = arr[0]; 
//LOOP SE ARRRAY ME TRAVEL KARENGE ....
 for(int i = 1 ; i < 20 ; i++){
    /*EL IF CONDITIN HE KI ARR ARR[I] JO HE MX SE CHOTA
   HE US CASE ME ARR[I] KO MX ME STORE KRA DENGE OR YE COMPARISON CHALTA RAHEGA
  FIR FINAL MX KO PRINT KRA LENGE */
    // if (mx>arr[i]) mx = arr[i];
    // mx = max(mx,arr[i]); //isko bhi use kr sakte he 

    mx = min(mx , arr[i]  ) ; 
 }
 cout<<"the minimum in array is : " <<" " <<mx; 

    return 0 ; 
}