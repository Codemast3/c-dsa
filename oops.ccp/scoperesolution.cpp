#include<iostream>
 using namespace std;

 int num = 10;

 int main(){
    int d = 50;
    cout<<"the local variable value:"<<d;

    cout<<"\nthe value of global variable :"<<::num;
 }