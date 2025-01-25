
// maximum icecream bars .. 


#include<bits/stdc++.h>
using namespace std ; 

class Solution {

   public:

    int maxIceCream(vector<int>& costs, int coins) {
        
        // sort .. 
        sort(costs.begin() , costs.end()) ; 

        // variable .. 
        int ice_count = 0 ; 

        // loop .. 
        for ( int &itr : costs ){
            if ( itr > coins ){
                return ice_count ; 
            }
            else{
                ice_count++ ; 
                coins -= itr ; 
            }
        }
        return ice_count ; 
    }
};