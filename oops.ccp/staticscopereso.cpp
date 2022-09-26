#include<iostream>
using namespace std;
class parent{
    static int n1;
    public:
    static int n2;
    void staticscopereso(int n1 ){

        cout<<"the value of static integer :"<<parent::n1;
        cout<<"\n the value of local variable:"<<n1;


    }


};
int parent::n2=10;
int parent::n1=34;
int main()
{
    parent b;
    int n1 = 17 ;
    b.staticscopereso(n1);
    cout<<"\n the value of base ::n2 =  "<<parent::n2;
    return 0;

}