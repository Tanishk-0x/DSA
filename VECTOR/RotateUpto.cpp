// AGAR KUCH SPECIFIC INDEX KO ROTATE KRNAHE TO ....
#include<iostream>
using namespace std ; 
// FUNCTION CALL BY REFERENCE .....
void reverse(int arr[] , int i , int j ){
    while(i<j){
        swap(arr[i] , arr[j]); 
        i++; 
        j--; 
    }
}


int main () {

int arr[] = {10,20,30,40,50};
int n = sizeof(arr) / 4 ;  

for (int i=0 ; i<n ; i++){
cout<<arr[i]<<"  " ; 
}
cout<<endl ; 


// REVERSE EK FUNCTION BANAKE CALL KARA HE MAIN FUNCTION SE AUR ACTUAL PARAMETER PASS KRE HE ...
reverse(arr,1,4);  // 1 int i ME PASS HO JAYEGA AUR 4 int j ME PASS HO JAYEGA ...

// CALL BY REFERENCE ME  = ANY CHANGE MADE TO FORMAL PARAMETER WILL GET REFLECTED TO ACTUAL PARAMETER ...
for (int i=0 ; i<n ; i++){
cout<<arr[i]<<"  " ; 
}


    return 0 ; 
}