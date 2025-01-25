
// insertion sort = card wala concept ....i =1 se chalenge elements ke sath compare karenge agar less than aata he to right me place hoha or agar greater 
// than aata he to left me place hoga .... aur bache hue ko ek place aage shift kr denge 

// time complexity = bigoh (n^2) in worst case ..
// space complexity = constant ..

#include<iostream>
using namespace std ;

//------------------------------------------------------------------------------------------------------------------------------------------------------------

int main (){

    // declaring aaray ...
    int arr[] = {1,4,21,6,8,3,5,87,55,15,13,12,9};
    int n = sizeof(arr) / sizeof(arr[0]); 

//-----------------------------------------------------------------------------------------------------------------
// insertion sort ....
    for(int i=0 ; i<n ; i++){ // number of rounds ..
        int temp = arr[i]; // temperory variable ..

        int j = i-1 ; 
        for(; j>=0 ; j--){
            if(arr[j] > temp ){
                arr[j+1] = arr[j] ; 
            }
            else{
                break; 
            }
        }
        arr[j+1] = temp ; 
    }

//----------------------------------------------------------------------------------------------------------------------------------    

    // loop for printing ....
    for(int i = 0 ; i<13 ; i++){
        cout<<arr[i]<<"  "; 
    }


return 0 ;
}