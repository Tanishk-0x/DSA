#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ; 
int main () {

// DECLAARING VECTOR ............
vector<int> v ; 

v.push_back(1);
v.push_back(3);
v.push_back(6);
v.push_back(7);

// BINARY SEARCH ...........
cout<<"finding 6 -> "<< binary_search(v.begin(),v.end() , 6 )<<endl; 

cout<<"lower bound -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl ; 
cout<<"upper bound -> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl ; 
 
 int a = 3 ;
 int b = 5 ; 

 cout<<"max -> "<<max(a,b);

cout<<endl ; 

 cout<<"min ->"<<min(a,b);


 swap(a,b);
 cout<<endl <<"a -> "<<a<<endl ; 

 string str = "abcd"; 
 reverse(str.begin(),str.end());
 cout<<" after reverse string is -> "<< str << endl ; 


 rotate(v.begin() ,v.begin()+1 ,v.end() );
 cout<<" after rotate  -> "<<endl ; 
 for(int i: v){
    cout<< i <<"  "; 
 }
 cout<<endl ;

    return 0 ; 
}