#include<iostream>
using namespace std ;
int main (){

    int arr[] = {23,54,65,21,54,15,12,98,85,65,72,91}; 
    int n = sizeof(arr) / sizeof(arr[0]) ; 

    cout<<"before applying sort : "<<"  "; 
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"  "; 
    }

    cout<<endl ; 

    // bubble sort ..........
    for(int i =1 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]); 
            }
        }
    }

cout<<"after sort : "; 
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<"  "; 
    }

return 0 ;
}