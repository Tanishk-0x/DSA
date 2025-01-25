#include<iostream>
//HEADER FILE IN STL FOR USING VECTOR ...............
#include<vector>
#include<algorithm>
// VECTOR KE BHAR JANE SE USKI CAPACITY DOUBLE HO JATI HE ............
using namespace std;

int main (){
vector<int> v = {1,2,3,4,5}; 
for(int i =0 ; i<5 ; i++){
    cout<<v[i]<<"  "<<"  " ; 
}
// SIZE AND CAPACITY ..........
int s = v.size() ;
cout<<"size is : "<< s <<endl ; 
cout<<"capacity is : "<<v.capacity()<<endl; 

v.push_back(7); 
cout<<"capacity is : "<<v.capacity()<<endl; 

v.push_back(8); 
cout<<"capacity is : "<<v.capacity()<<endl; 

v.push_back(9); 
cout<<"capacity is : "<<v.capacity()<<endl; 

cout<<"size  is : "<<v.size()<<endl;

for(int i =0 ; i<10 ; i++){
    cout<<v[i]<<"  "<<"  " ; 
}
cout<<endl ; 
// FIND ELEMENT AT nTH INDEX BY USING = vectorname.at(index); .............
int n = 6 ; 
cout<<"element at index " << n <<" :"<<v.at(n)<<endl; 

//FRONT AND BACK BY USING = V.back() and v.front(); ..........
cout<<"front element is : "<<v.front()<<endl ; 
cout<<"last element is : "<<v.back()<<endl ; 

cout<<endl;
cout<<endl;
cout<<endl;

cout<<"before pop : "<<endl ; 
for(int i =0 ; i<10 ; i++){
    cout<<v[i]<<"  "<<"  " ; 
}
cout<<endl  ; 
// USING POP FOR REMEOVE LAST ELEMENT ......
v.pop_back() ;
cout<<"after pop"<<endl ; 
//FOR LOOP KO ESE BHI USE KR SAKTE HE ...............
for( int i:v){
    cout<<i<<"    " ; 
}

    return 0 ;
}