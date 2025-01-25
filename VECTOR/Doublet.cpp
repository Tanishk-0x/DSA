// TWO SUM LEETCODE ? 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
int main () {

    int target ; 
    cout<<"enter target : "; 
    cin>>target ; 

vector<int> v(2); 

int arr[13] ={24,45,76,55,98,90,76,25,56,85,92,15,11};  

for(int i = 0 ; i<13 ; i++){
for(int j = i+1 ; j<13 ; j++){
    if(arr[i] + arr[j] == target){
       v[0] = i ; 
       v[1] = j ; 
    }
    
}
}
cout<<v[0]<<"  " <<v[1] ; 



    return  0 ; 
}