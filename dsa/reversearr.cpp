#include<iostream>
using namespace std ;
int main{
    int arr[50],num,temp,i,j;
    cout<<"please enter the total no.  you want to enter";
    cin >> num;
    // use for loop to enter the numbers
    for(i=0;i<num;i++){
        cout<<"enter the element"<<i+1<<":";
        cin>>arr[i];

    }
    for(i=0;j=nnum-1;i<num/2;i++,j--){
        temp=arr[i];
        arr[i]=arr[i];
        arr[i]=temp;

    }
    cout<<"\n reverse all elements of array:"<<endl;
    for(i=0;i<num;i++){
        cout<<arr[i]<<"";
    }
    return 0;


}