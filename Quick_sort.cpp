#include <iostream>

// Function to partition the array and return the partition index
int Partition(int a[], int p, int q) {
    int pivot = a[p];
    int i = p, j = q;
    while (true) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i >= j) return j;
        std::swap(a[i], a[j]);
        i++;
        j--;
    }
}

// Recursive function to perform QuickSort
void QuickSort(int a[], int p, int q) {
    if (p < q) {
        // Partition the array
        int j = Partition(a, p, q + 1);
        // Recursively sort the partitions
        QuickSort(a, p, j - 1);
        QuickSort(a, j + 1, q);
    }
}

int main() {
    // Example usage
    int a[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    QuickSort(a, 0, n - 1);
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
