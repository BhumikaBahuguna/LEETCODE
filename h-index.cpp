#include <iostream>
#include <vector>

using namespace std;

int hIndex(vector<int>& citations) {
    int n = citations.size();
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int h = n - mid; // Papers remaining

        if (citations[mid] >= h) {
            right = mid - 1; // Move left to find a smaller valid index
        } else {
            left = mid + 1;
        }
    }

    return n - left; // Final H-index
}

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;  // Number of papers

        vector<int> citations(n);
        for (int i = 0; i < n; i++) {
            cin >> citations[i]; // Read sorted citations
        }

        cout << hIndex(citations) << endl;
    }

    return 0;
}