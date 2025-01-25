#include<iostream>
using namespace std ; 
int main () {
// ARRAY KO BINA SIZE BATAYE BHI DECALRE KR SAKTE HE.LEKIN DECLARE OR INITIALISED EK SATH KRNA HOGA {_ , _ , _ , _} ESE 
int arr[] = {2,3,4,5,6,7,8,7,8,7,6,5,4,3,2,1} ; 
int x ; 
// sizeof OPERATOR SE KISI BHI CHIJ KA SIZE PTA KR SAKTE HE 

x = sizeof(arr); // sizeof(arr) SE ARR KE ELEMENT NE KITNI MEMORY USE KRI HE WO PTA CHAL JAYEGA .....
//APNE KOOOO NUMBER OF ELEMENT JANNA HE TO X ME JO SIZE STORE HUA USKO ARR KE  (sizeof 0TH INDEX) SE divide kr denge ..... 
 int final = x /  sizeof (arr[0]); 
//  PRINT KR DENGE FINALLY ....
cout<<final ; 
    return 0 ; 
}