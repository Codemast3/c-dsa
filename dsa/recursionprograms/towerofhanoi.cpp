#include<iostream>
using namespace std;

    void toh  (int n, char a , char b , char c){
        if(n==1){
            cout<<"move from "<<a<<"to"<<b<<endl;

        }
    
            toh( n-1,  a,  b,  c);
                cout<<"move "<<n<<"to"<<a<<endl;
            

                        toh(n-1,b, a,c);
            
    }

            

        
    
    

