
// CHOCOLATE DISTRIBUTIN PROBLEM .. 

#include<bits/stdc++.h>
using namespace std ; 

class Solution {

  public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    sort(a.begin() , a.end() ) ; 
    
    int i = 0 ; 
    int j = m-1 ; 
    
    int mini = INT_MAX ; 
    
    while( j < a.size() ) {
        
        int differ = a[j] -a[i] ; 
        
        mini = min( mini , differ ) ; 
        i++ ; 
        j++ ; 
    }
    
    return mini ; 
    
    }   
};