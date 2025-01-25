//find the element X in array  , take array and X as input ?

// #include<iostream>
// using namespace std ; 
// int main () {

// int arr[] = {7,5,4,3,6,11,34,56,87,98,55};
// int n = sizeof(arr) / sizeof(arr[0]);

// int target ; 
// cout<<"enter the target : " ; 
// cin >> target ; 


// for (int i = 0 ; i < n ; i++){
//     if(arr[i] == target){
//         cout<< target << " " <<"found...."; 
//     }


    
// }
//     return 0  ; 
// }


// SOLVER WITH USING BOOLEAN .........................................................................................

#include<iostream>
using namespace std ; 
int main () {

    int arr[] = {7,5,4,3,6,11,34,56,87,98,55};
int n = sizeof(arr) / sizeof(arr[0]);

int target ; 
cout<<"enter the target : " ; 
cin >> target ; 

bool flag = false ; //false means absent 
for (int i = 0 ; i<n ; i++){
    if(arr[i]==target){
        flag = true ; //true means present 
        break ; 
    }
}
if(flag==true) cout<<target<<" is present " ;
else cout<<target<< " is not present " ; 
   
    return 0 ; 
}