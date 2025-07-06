#include<bits/stdc++.h>
using namespace std;
int subarrayxor(vector<int> a,int k){
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        xr^=xr^a[i];
        int x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
int main(){
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    
    int result = subarrayxor(a, k);
    cout << "The count of subarrays with XOR equal to " << k << " is: " << result << endl;
    
    return 0;
}