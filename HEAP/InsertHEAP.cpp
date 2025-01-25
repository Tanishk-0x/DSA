#include<iostream>
using namespace std ;

// class create kri he ..
class heap{
    public: 

    int arr[100] ; // declaring array .. 
    int size = 0 ; 


    //constructor banayenge .. 
    heap(){
        arr[0] = -1 ; 
        size = 0 ; 
    }

    // function for insert .. 

    void insert(int val){

        size = size + 1 ;  // step 1 : value ko end me insert kr di he .. 
        int index = size ; 
        
        arr[index] = val ; 

        while(index > 1 ){

            int parent = index / 2 ; // formula .. 

                if(arr[parent] < arr[index]){  // step 2 : value ko sahi jagah pe le jane ke liye upar wale formulas ko use krenge .. 
                    swap(arr[parent] , arr[index]) ;
                    index = parent ; 
                }

                else{
                    return ; // matlab already sahi jagah pe he .. 
                }
        }
    }

    void print(){

        for(int i=1 ; i<=size ; i++){
            cout<<arr[i]<<"  " ;
        }
        cout<<endl ; 
    }
}; 




int main (){

    heap h ; // object create kra he .. 

    h.insert(56) ; 
    h.insert(80) ; 
    h.insert(75) ; 
    h.insert(66) ; 
    h.insert(26) ; 

    h.print() ; 

return 0 ;
}