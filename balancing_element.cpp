#include <iostream>
#include <vector>

using namespace std;

int findBalancingElement(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0]; // Edge case: Single element is always balancing

    vector<int> leftMax(n, 0);
    vector<int> rightMin(n, 0);

    // Compute leftMax[i] (max value before index i)
    leftMax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }

    // Compute rightMin[i] (min value after index i)
    rightMin[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMin[i] = min(rightMin[i + 1], arr[i]);
    }

    // Find the first balancing element
    for (int i = 0; i < n; i++) {
        if (leftMax[i] == arr[i] && rightMin[i] == arr[i]) {
            return arr[i];
        }
    }

    return -1; // No balancing element found
}

int main() {
    int n;
    cin >> n; // Read size of the array

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read array elements
    }

    cout << findBalancingElement(arr) << endl;
    return 0;
}