#include<iostream>
using namespace std ; 
int main () {
 // ARRAY LO DECLARE + INITIALISED KRA HE ....
 int arr[20] = { 99,3,4,5,7,6,4,54,43,44,88,76,95};
 //EK VARIABLE CREATE KRA HE USKO ARR[0] LE EQUATE KR DIIYA HE ...
 int mx =arr[0] ; 
//LOOP SE ARRRAY ME TRAVEL KARENGE ....
 for(int i = 1 ; i < 20 ; i++){
    /*EL IF CONDITIN HE KI ARR ARR[I] JO HE MX SE BADA
  BADA HE US CASE ME ARR[I] KOMX ME STORE KRA DENGE OR YE COMPARISON CHALTA RAHEGA
  FIR FINAL MX KO PRINT KRA LENGE */
    if (mx<arr[i]) mx = arr[i];
    // mx = max(mx,arr[i]); //isko bhi use kr sakte he 
 }
 cout<<"the maximum in array is : " <<" " <<mx; 

    return 0 ; 
}