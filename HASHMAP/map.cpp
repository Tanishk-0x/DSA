
// randon print nhi hote he map me jis order me dale he usi order me print hote he .. 

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std ;

int main (){

    // map banayege .. 
    //<int,int> matlab bata diya he ki data int , int ke form me hoga .. k
    map<string,int> m ; 


    // insertion krenge .. 

    // 1 .. 
    pair<string, int> p = make_pair("tani" , 3) ; 
    m.insert(p) ; 

    //2 .. 
    pair<string,int> q("hello" , 2);  
    m.insert(q) ; 

    //3 .. 
    m["heyy"] = 4 ; // ek new entity create ho gyi he .. 
    m["heyy"] = 5  ; // update hogi .. 



    // search .. 

    cout<<" the first ans is : "<<m["tani"] << endl ; 

    cout<<" the second ans is : "<<m.at("hello") << endl ; 

    cout<<" the third ans is : "<<m["unknown"] << endl ; 

    cout<<" the fourth ans is : "<<m.at("unknown") << endl ; 

    cout<<endl ; 


    // size ...
    cout<<" the size is : "<<m.size()<<endl ;  


    // to check presenece ki present he bhi ya nhi ..
    cout<<" the presence : "<<m.count("bro")<<endl ; 
    cout<<" the presence : "<<m.count("tani")<<endl ;


    // erase function .. 
    m.erase("tani") ; 
    cout<<" the size after erase is : "<<m.size()<<endl ;  



    // print .. 
    // pura hi print krneke liye .. 
    for(auto i : m ){
        cout<<i.first<<"   "<<i.second<<endl ; 
    }


    
    cout<<"/////////////////////////////"<<endl ; 


    // iterator se ek ek kar ke iterate kr sakte he . 
    map<string,int> ::iterator it = m.begin() ; 
    
    while (it != m.end())
    {
        cout<<it->first<<"   "<<it->second<<endl ; 
        it++ ; 
    }
    

return 0 ;
}