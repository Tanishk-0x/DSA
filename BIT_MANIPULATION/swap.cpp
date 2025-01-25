
// swaping two nnumber without using extra variable .. 
// using XOR operator .. 

#include <iostream>
using namespace std ; 

int main() {
   int a = 5 ; 
   int b  = 7 ; 
   
   a = a^b ; 
   b = a^b ; 
   a = a^b ; 
   cout<<"the a is : "<<a<<endl ; 
   cout<<"the b is : "<<b<<endl ; 

    return 0;
}