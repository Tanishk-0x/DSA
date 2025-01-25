#include<iostream>
using namespace std ; 
int main () {
    

int arr[2][3] = {55,65,76,82,12,32}; 

int ptr ; 
ptr = *arr[0][1] ; 
for(int i = 0 ; i<2 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cout<<arr[i][j]<<"  " ; 
    }
}

cout<<endl ; 

for(int i = 0 ; i<2 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cout<< ptr  <<"  " ; 
    }
}







    return  0 ; 
}