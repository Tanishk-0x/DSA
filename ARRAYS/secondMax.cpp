// PROGRAMM TO FIND SECOND MAX IN THE ARRAY ? 

#include<iostream>
#include<climits>
using namespace std ; 
int main () {
 int arr [20] = { 23,34,54,22,98,99,115,150};
  int mx = INT_MIN;
int smx = INT_MIN;
  for (int i= 0 ; i<20 ; i++){
  if (mx<arr[i]) mx = arr[i] ; 
  } 

   for (int i= 0 ; i<20 ; i++){
  if (smx<arr[i] && arr[i] != mx ) 
  smx = arr[i] ; 
  } 

cout << "THE MAX IS : "<<mx << endl ; 
  cout << "THE SECOND MAX IS : "<<smx ; 
    return 0 ; 
}