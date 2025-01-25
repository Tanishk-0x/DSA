//PASSING OF ARRAY .  BY REFERENCE ...

#include<iostream>
using namespace std ; 

int edit(int arr[]){
    arr[0] = 7657; 
      arr[1] = 98798; 
        arr[2] = 44454; 
}





int main () {
int arr[8] = {55,65,87,56,35,25,95,75} ; 
for(int i=0 ; i<8 ; i++){
    cout<<arr[i]<<endl; 
}

cout<<endl;

edit(arr) ;

for(int i=0 ; i<8 ; i++){
    cout<<arr[i]<<endl; 
}

    return 0 ; 
}