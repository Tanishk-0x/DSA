
//bubble sort  = isme neightbour element se compare karte he agar arr[j] > arr[j+1] he to swap kara denge nhi to ignore kr denge ..

#include<iostream>
using namespace std ;
int main (){

//-----------------------------------------------------------------------------------------------------------------------------------------------------    
 
    int arr[] = {2,5,7,10,1,6,8,15,12,23,11,9}; // declaring array ..
    int n = sizeof(arr)/sizeof(arr[0]); // finding size of array ..


// printing array before applying sort .....
   cout<<"before sort : "; 
        for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<"  "; 
    }

    cout<<endl ; 


//---------------------------------------------------------------------------------------------------------------------------------------------------
// bubble sort .................    
    for(int i =1 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]); 
            }
        }
    }


//------------------------------------------------------------------------------------------------------------------------------------------------
// printing element after applying bubble sort .....
cout<<"after sort : "; 
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<"  "; 
    }


return 0 ;
}