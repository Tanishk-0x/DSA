#include<iostream>
#include<algorithm>
using namespace std ;
int main (){

    string x = {"1011"} ; 
    int n = x.length() ; 
    int num = 0 ; 
    int power = 1 ; 

    for(int i=n-1 ;  i= 0 ; i--){
        if(x[i] == '1' ){
            num = num + power ; 
            power = power * 2 ; 
        }
    }
    cout<<num ; 
return 0 ;
}