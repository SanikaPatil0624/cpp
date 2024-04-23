// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
    private:
    int a=20;
    protected:
    int b=15;
    friend class B;
};
class B
{
    public:
    int display(A& t)
    {
        cout<<t.a<<endl<<t.b;
        return 0;
    }
    
};
int main() {
    A oba;
   B ob;
   ob.display(oba);

    return 0;
}
