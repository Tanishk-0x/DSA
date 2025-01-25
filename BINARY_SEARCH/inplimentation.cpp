
// binary search ...... (monotonic) ..............

#include<iostream>
using namespace std ;


    int binarysearch(int arr[] , int size  , int key ){
        // decalring and initialising start end and mid .........
        int start = 0 ; 
        int end = size - 1 ; 
    
        int mid = (start+end)/2 ; // formula for calculate mid ....
        // optimised formulas ...............
            // int mid = start + ( end - start) / 2 ; 

            while(start <= end){
                // checking the condition ....
                if(arr[mid]==key){
                    return mid ; 
                }

          // right wale part me jayenge agar key > mid he to .........
               if(key > mid){
                start = mid + 1 ; 
               }      
               else{
                end = mid - 1 ; 
               }
               mid = (start+end)/2 ; 
            }

        return -1 ; 
    }

//-------------------------------------------------------------------------------------------------------------------------------------------

int main (){


    // creating an array of even size ...
    int even[6] = {2 , 5 , 7 , 9 , 13 , 25 }; 
    // creating an array of odd size ....
    int odd[5] = { 5 , 7 , 9 , 14 , 19 }; 
    
    // caliing the binary search function and store the value in evenindex variable ...................
         int evenindex = binarysearch(even , 6 , 45 ); 
        cout<<"the index of the 13 is : " << evenindex << endl ; 

    // calliing the binary search and store the value in oddindex variable ........................
         int oddindex = binarysearch(odd , 5 , 19); 
        cout<<"the index of the 19 is : " << oddindex << endl ; 


return 0 ;
}