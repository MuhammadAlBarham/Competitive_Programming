#include <iostream>

using namespace std ; 


int main(){

    int n ;
    int CaseNumber = 1 ; 

    while(cin>>n && n!=0){
        printf("%d. ", CaseNumber) ; 
        ++CaseNumber; 
        if(n%2 ==0 ){

            printf("even "); 
            printf("%d\n", n/2) ; 

        }
        else {
            printf("odd "); 
            printf("%d\n", (n-1)/2); 

        }

    }




    return 0 ; 
}