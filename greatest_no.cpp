#include <iostream>
using namespace std;
int a, b, c, d;
  int max()
    {
    int greatest = a;
    if (b > greatest) {
        greatest = b;
    }
    if (c > greatest) {
        greatest = c;
    }
    if (d > greatest) {
        greatest = d;
    }
    cout << greatest << endl;
    return 0;
    }
int main() {
    
    
    // Input four integers
    cin >> a >> b >> c >> d;
    max();
    // Find the greatest integer
  
    // Output the greatest integer
    
    
    return 0;
}
