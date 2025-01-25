
// REVERSE WORD IN GIVEN STRING .. 

#include<bits/stdc++.h>
using namespace std ; 

class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        string ans = "" ; 
        string temp = "" ; 
        
        for(int i=s.length()-1 ; i>=0 ; i-- ){
            
            if(s[i] == '.'){
                reverse(temp.begin(), temp.end()) ; 
                ans = ans + temp ; 
                ans.push_back('.') ; 
                temp = "" ; 
            }
            else{
                temp.push_back(s[i]) ; 
            }
        }
        
        // last element handling .. 
        reverse(temp.begin() , temp.end()) ; 
        ans = ans+temp ; 
        
        return ans ; 
    }
};