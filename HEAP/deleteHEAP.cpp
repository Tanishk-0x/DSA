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

//---------------------------------------------------------------------------------------------------------
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

//--------------------------------------------------------------------------------------------------------
//                                      function for print .. 

    void print(){

        for(int i=1 ; i<=size ; i++){
            cout<<arr[i]<<"  " ;
        }
        cout<<endl ; 
    }


//------------------------------------------------------------------------------------------------------------
//                                          function for delete .. 

    void deletekrdo(){

        if(size==0){
            cout<<"nothing to delete .. "<<endl ; 
            return  ;
        }
        
        //first node aur lastnode ko swap krdo .. 
        arr[1] = arr[size] ; 
        size-- ; 

        // sahi jagah par place krenge .. 
        int i = 1 ; 

        while( 1 < size ){

            int leftindex = 2 * i ; 
            int rightindex = 2*i + 1 ; 


             if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i] , arr[leftindex]) ; 
                i = leftindex ; 
            }

            else if(rightindex < size && arr[i] < arr[rightindex]){
                swap(arr[i] , arr[rightindex]) ; 
                i = rightindex ; 
            }

            else{
                return ; 
            }

        }
    }

}; 

//---------------------------------------------------------------------------------------------------------


int main (){

//----------------------------------------------------------------------------------------------------------    

    heap h ; // object create kra he .. 

    h.insert(56) ; 
    h.insert(80) ; 
    h.insert(75) ; 
    h.insert(66) ; 
    h.insert(26) ; 


    cout<<"before delete "<<endl ; 

    h.print() ; 

//-----------------------------------------------------------------------------------------------------------

    // calling delete function .. 

    h.deletekrdo() ; // calling......

    // print after delete .. 
    cout<<"after delete "<<endl ; 
    h.print() ; 

//-------------------------------------------------------------------------------------------------------------


return 0 ;
}