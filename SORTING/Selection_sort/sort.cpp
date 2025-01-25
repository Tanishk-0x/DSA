#include<iostream>
#include<algorithm>
using namespace std ;

int main (){
     int arr[] = {10,43,9,5,87,55,35,98,82,92,15};
     int n = sizeof(arr)/sizeof(arr[0]); 

    cout<<"before sort : "<<"  "; 
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"  "; 
    }
    cout<<endl ; 

     // selection sort

     for(int i=0; i<n-1 ; i++){
        int minIndex = i ; 
        for( int j=i+1 ; j<n ; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j ; 
            }
        }
        swap(arr[minIndex] , arr[i]); 
     }
cout<<"after sorting : "<<"  "; 
     for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<"  "; 
     }

return 0 ;
}