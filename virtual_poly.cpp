#include<iostream>  
using namespace std;  
class B {  
public:  
         virtual void s() {  
         cout<<" In Base \n";  
      }  
};  
class D: public B {  
public:  
      void s() {  
        cout<<"In Derived \n";  
      }  
};  
int main(void) {  
D derive; 
B *base= &derive; 
base->s(); 
   return 0;  
}  
