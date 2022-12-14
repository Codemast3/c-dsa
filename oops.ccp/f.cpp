// how to make program on scope resolution?
int a = 10;
namespace M
{
    int a = 20;
    namespace N
    {
           int a = 30;
           void f()
           {
              int x = a; //a refers to the name inside N, same as M::N::a
              int y = M::a; //M::a refers to the name inside M
              int z = ::a; //::a refers to the name in the global namespace

              std::cout<< x <<","<< y <<","<< z <<std::endl; //30,20,10
           }
    }
}


struct A
{
    void f() { std::cout << "A::f()" << std::endl; }
};

struct B : A
{
    void f(int) { std::cout << "B::f(int)" << std::endl; }
};


B b;
b.f(10); //ok
b.f();   //error - as the function is hidden


error: no matching function for call to ‘B::f()’


b.A::f(); //ok - explicitly selecting the hidden function using scope resolution


