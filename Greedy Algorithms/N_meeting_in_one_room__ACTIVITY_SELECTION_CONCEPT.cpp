
// N MEETINGS IN ONE ROOM [ ACTIVITY SELECTION CONCEPT ]

#include <bits/stdc++.h>
using namespace std;

class solution{

  public:
    
    // custom comperator to compare .. 
    static bool cmp(pair<int,int> a , pair<int,int> b ){
        return a.second < b.second ; 
    }

    int maxMeetings(int n, int start[], int end[]) {
        
        vector<pair<int,int> > vec ; 
        
        for(int i=0 ; i< n ; i++){
            pair<int,int> p = make_pair(start[i] , end[i]) ; 
            
            //push kr denge vector me 
            vec.push_back(p) ; 
            
        }
        
        // sort krenge .. 
        sort(vec.begin() , vec.end() , cmp) ; 
        
        int count = 1 ; 
        int ansEnd = vec[0].second ; 
        
        for(int i=1 ; i<n ; i++){
            
            // condition check krenge .. 
            if( vec[i].first > ansEnd) {
                count++ ; 
                
                //updating ansEnd .. 
                ansEnd = vec[i].second ; 
            }
        }
        
        // returning count .. 
        return count ; 
    }
};