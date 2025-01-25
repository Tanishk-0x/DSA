// CALL BY REFEREENECE .. VALUE KI JAGAH PE ADDRESS PASS HOTA HE ...

#include<iostream>
using namespace std ;

 int fun (int *ptr1 , int *ptr2 ) {
cin>>*ptr1 ; 
cin>>*ptr2 ; 
}



int main () {
int x = 10 ; 
int y = 50 ; 

cout<< " normal value : " <<x<<endl<<y <<endl ; 

fun (&x , &y ) ; 

cout<<"call by value : "<<x<<endl<<y ; 


    return 0 ;
}