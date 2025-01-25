// BATA RHA HE KI ARRAY ME KOI ELEMENT REPEAT HO RHA HE KYA AUR USKA INDEX BTA RHA HE .....

#include<iostream>
#include<vector>
using namespace std ; 

int main () {

    vector<int> v(2) ; 

int arr[13] = {10,20,30,40,50,60,70,80,90,15,98,17,20};

for(int i = 0 ; i<13 ; i++){
    for(int j = i+1 ; j<13 ; j++){
        if(arr[i]==arr[j]){
            v[0] = i ; 
            v[1] = j ; 
        }
    }
}
cout<<v[0]<<"  "<<v[1] ; 




    return 0 ; 
} 