
// CHECK IF IT POSSIBLE TO SURVIVE ON THE ISLAND 

#include<bits/stdc++.h>
using namespace std ; 


class Solution {
  public:
    int minimumDays(int S, int N, int M) {
        // code here
        
        int sunday = S/7 ; 
        
        int buyingDays = S-sunday ; 
        int totalFood = S*M ; 
        int ans = 0 ; 
        
        if ( totalFood % N == 0 ) {
            ans = totalFood/N ; 
        }
        else{
            ans = totalFood/N + 1 ; 
        }
        
        if ( ans <= buyingDays) 
            return ans ;
        
        else
        return -1 ; 
    
    }
};