#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n; // Taking input for the number of integers
    
    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i]; // Taking input for the array
    }

    // Printing the integers of the array in reverse order
    for(int i = n - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    
    return 0;
}