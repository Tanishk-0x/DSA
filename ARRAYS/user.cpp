#include<iostream>
using namespace std ; 
int main () {
//USER SE PUCHA HE KI KIS SIZE KA ARRAY CREATE KRNA HE 
int b ;
 cout<<"enter array size : " ;
 cin>>b ; 

//ARRAY KO CREATE KRA HE ....
 int arr[b];  
//FOR LOOP LI MADAD SE VALUE INPUT KRAYI HE ...
for(int i= 0 ; i<b ; i++) { 
    cin>>arr[i] ; 
}
//FOR LOOP KI HELP SE VALUE KO PRINT KRAYA HE YA OUT KRAYA HE ...
for(int i= 0 ; i<b ; i++) { 
    cout<<arr[i] <<endl; 
}
    return 0 ; 
}