#include<iostream>
//HEADER FILE IN STL FOR USING ARRAY ...............
#include<array>
using namespace std;
int main (){
    //NORMAL ARRAY..........
    int arr[3] = {1,2,3};

    // ARRAY USING STANDARD TEMPLATE LIBRARY............
    array<int,4> modify = {1,2,3,4};// 4 is the size 

    int size = modify.size(); //FOR FING SIZE OF AN ARRAY .......

    cout<<"size is = " <<size <<endl; 
    //FOR LOOP FOR PRINTING ELEMENTS..........
    for(int i=0 ; i<size ; i++){
        cout<<modify[i]<<"  " ; 
    }
    cout<<endl;

    // IF WE HAVE TO KNOW THE nTH INDEX ELEMENT THEN = arrayname.at(index); .............. 
    int n = 2 ; 
    cout<<"at index"<<n<<" : "<<modify.at(n)<<endl; // n is the index .........

    //FOR CHECK EMPTY OR NOT  = arrayname.emppty(); ......
    cout<<"empty or not : "<<modify.empty()<<endl;

    // FRONT OR BACK = arrayname.front() ...... arrayname.back() ; .............
    cout<<"first element : "<<modify.front()<<endl;
    cout<<"back element : "<<modify.back()<<endl; 

    cout<<endl;
    return 0 ; 
}