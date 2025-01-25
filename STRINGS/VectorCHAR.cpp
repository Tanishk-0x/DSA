// USING SORT REVERSE FIND VECTOR FOR CHARACTERS..........

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ; 
int main () {
 //VARIABLE FOR STORE INDEX ....
 int idx ; 
// DECLEARING VECTOR FOR CHARARCTERS (CHAR DATA-TYPE) OF SIZE (7) ...........
vector<char> arr(7) ; 

// FOR LOOP FOR INPUT CHARACTERS ....
cout<<"enter charcters : "<<endl ; 
for(int i = 0 ; i<7 ; i++){
    cin>>arr[i]; 
}

// FOR LOOP FOR OUTPUT OR PRINT CHARACTERS ...
for(int i = 0 ; i<7 ; i++){
    cout<<arr[i]<<"  " ; 
}
cout<<endl; 

// sort FUNCTION TO SORT THE INPUTED CHARACTERS ..........
sort(arr.begin() , arr.end()); 

for(int i = 0 ; i<7 ; i++){
    cout<<arr[i]<<"  " ; 
}

cout<<endl ;

// REVERSING THE SORTED ARRAY OR VECTOR .......
reverse(arr.begin() , arr.end()); 

for(int i = 0 ; i<7 ; i++){
    cout<<arr[i]<<"  " ; 
}

cout<<endl ;

// DECLARE target VARIABLE FOR INPUT TARGET WHAT HAS TO FIND .......
char target ; 
 cout<<"enter target : "<<endl; 
 cin>>target ;

// FOR LOOP TO TRAVEL THROUGHOUT THE ARRAY OR VAECTOR .....
// IF CONDITION IF ARR[I]==TARGET TO USKE INDEX KO IDX VARIABLE ME STORE KARA LEGA ....
for(int i = 0 ; i<7 ; i++){
 if(arr[i]==target){
    idx = i ; 
 }
}
//PRINTING idx .........

cout<<idx ; 

    return 0 ; 
}