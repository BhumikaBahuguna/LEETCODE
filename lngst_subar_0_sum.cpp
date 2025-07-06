#include<bits/stdc++.h>
using namespace std;
int maxlen(int a[],int n){
    unordered_map<int,int> mpp;
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==0){
            maxi=i+1;
        }else{
            if(mpp.find(sum)!=mpp.end()){
                maxi=max(maxi,i-mpp[sum]);
            }else{
                mpp[sum]=i;
        }
    }
}
return maxi;
}
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int result = maxlen(a, n);
    cout << "The length of the longest subarray with sum equal to zero is: " << result << endl;
    
    return 0;
}