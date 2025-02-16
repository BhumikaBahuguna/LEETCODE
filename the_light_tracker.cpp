#include <iostream>
using namespace std;

int main() {
    int n;  // Number of lights
    cin >> n;
    
    int count = 0;  // Counter for ON lights
    for (int i = 0; i < n; i++) {
        int state;
        cin >> state;
        if (state == 1) {
            count++;  // Increment counter if the light is ON
        }
    }
    
    cout << count << endl;  // Output the count of ON lights
    return 0;
}