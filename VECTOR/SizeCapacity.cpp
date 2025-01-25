#include<iostream>
// HEADER FILE FOR USING VECTOR ...
#include<vector>
using namespace std ; 
int main () {

int n = 7 ; 
// VECTOR KO DECLARE KRA HE ...
vector<int> tani(n);
// FOR LOOP KIMADAD SE VECTOR KO PRINT KR DIYA HE ...
for (int i=0 ; i<n ; i++){
    cout<<tani[i]<<"  "; 
}

cout<<endl ; 
//A.SIZE SE VECTOR KA SIZE PATA KR SAKTE HE ...
//ARR.CAPACITY SE VECTOR KIRR CAPACITY PTA KR SAKTE HE ...
cout<<" the size : "<<tani.size()<<endl ;
cout<<"the capacity : "<<tani.capacity()<<endl ; 
cout<<endl ; 

//ARR.push_back() SE ELEMENT INSERT KR SAKTE HE ....
tani.push_back(55) ; 

cout<<tani[7]<<endl ; 
cout<<" the size : "<<tani.size()<<endl ;
cout<<"the capacity : "<<tani.capacity()<<endl ; 

 // ARR.pop_back() SE PREVIOUS ELEMENT REMOVE KR SAKTE HE ....
 tani.pop_back();

 cout<<" the size : "<<tani.size()<<endl ;
cout<<"the capacity : "<<tani.capacity()<<endl ; 



    return 0 ; 
}