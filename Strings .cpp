#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    string b;
   
    cin>>a;
    cin>>b;
    
    int len_a = a.size();
    int len_b = b.size();
   cout << len_a << " " << len_b << endl;
    string c=a+b;
   cout << c << endl;

   
   int temp =a[0];
   a[0]=b[0];
   b[0]=temp;
    cout << a << " " << b <<endl;

    return 0;
}
