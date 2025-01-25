//COPY OF ARRAY IN REVERSE ORDER USING ANOTHER ARRAY ......

#include<iostream>
using namespace std ; 
int main () {

int arr[5] = {15,25,35,45,55}; 

for(int i = 0 ; i<5 ; i++){
    cout<<arr[i]<<"  " ;
} 
cout<<endl ; 

int brr[5] ; 

for(int i=0 ; i<5 ; i++){
    brr[i] = arr[5-1-i];
}

for(int i=0 ;i<5 ; i++){
    cout<<brr[i]<<"  "; 
}

    return 0 ; 
}