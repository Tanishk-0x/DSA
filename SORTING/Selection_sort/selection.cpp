
// selection  sort  =  round to round sort chalta he pehle round me element ko uski sahi jagah par place krte he ... 

#include<iostream>
#include<algorithm>
using namespace std ;

//------------------------------------------------------------------------------------------------------------------------------------------------

int main (){
    int arr[7] = {32,45,12,98,15,76,20};

// loop for printing element before sorting ....
     for(int i = 0 ; i<7 ; i++){
            cout<<arr[i]<<"  "  ; 
        }
        cout<<endl ; 

//-----------------------------------------------------------------------------------------------------------------------------------------------
// selection sort applied ......
    for(int i =0 ; i<6 ; i++){
      int  minIndex = i ; 
    
            for(int j=i+1 ; j<7; j++){

                    if(arr[minIndex] < arr[j]){
                     minIndex = j ; 
            }
        }
        swap(arr[minIndex] , arr[i]);
    }

//-----------------------------------------------------------------------------------------------------------------------------------------------------    
// loop for printing element after sort ......
       for(int i = 0 ; i<7 ; i++){
            
            cout<<arr[i]<<"  " ; 
        }
       


return 0 ;
}