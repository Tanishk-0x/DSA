#include<iostream>
using namespace std ; 
int main () {
    
int n = 7 ; 

    char arr[n];

    cout<<"enter characters : "<<endl ; 

    for(int i=0 ; i<n ; i++){
        cin>>arr[i] ; 
    }


      for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"  " ; 
    }

    return 0 ; 
}