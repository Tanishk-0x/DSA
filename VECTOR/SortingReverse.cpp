#include<iostream>
#include<vector>
// HEADER FILE FOR USING SORT FUNCTION ...
#include<algorithm>

using namespace std ; 

int main () {

vector<int> arr(5);

for(int i=0 ; i<arr.size() ; i++){
    cin>>arr[i]; 
}

 cout<<"normal vector :" ;

for(int i=0 ; i<arr.size() ; i++){ 
    cout<<arr[i]<<"  "; 
}
cout<<endl ; 
// SORTING USING sort(arr.begin() , arr.end()); ...........
sort(arr.begin(),arr.end()); 

cout<<"sorted vector is : " ; 
for(int i=0 ; i<arr.size() ; i++){
    cout<<arr[i]<<"  "; 
}

cout<<endl ; 
// REVERSE THE VECTOR USING reverse(arr.begin() , arr.end()); ...........
reverse(arr.begin(),arr.end()); 

cout<<"reverse vector is : " ; 
for(int i=0 ; i<arr.size() ; i++){
    cout<<arr[i]<<"  "; 
}


    return 0 ; 
}