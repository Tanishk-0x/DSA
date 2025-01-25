
// MINIMUM COST OF ROPES ... 

#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:

    long minCost(std::vector<long long>& arr) {
        // code here
        
        std::priority_queue<long, std::vector<long>, std::greater<long>> pq; 
        for (long length : arr) {
            pq.push(length); 
        }
        
        long cost = 0; 
        while (pq.size() > 1) {
            
            long temp1 = pq.top(); 
            pq.pop(); 
            long temp2 = pq.top(); 
            pq.pop(); 
            
            long newRope = temp1 + temp2 ; 
            
            pq.push(newRope); 
            cost += newRope; 
        }
        
        return cost; 
    }
};