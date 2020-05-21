#include <stdlib.h> 
#include <iostream>
#include <algorithm>

using namespace std ; 

int main(){

    int t ; 
    int a[10]; 
    cin >> t ; 
    
    while (t--)
    {
        for(int i = 0 ; i<10; i++){
            cin>>a[i]; 
        }
        // Using sort from Algorithm Library 
        
        // Method 1 
        sort(&a[0], &a[10]); 
        // Method 2 
        sort(a, a+10); 

        cout<<a[1]<<endl;

    }



    return 0 ; 
}