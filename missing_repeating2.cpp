//USING XOR
#include<bits/stdc++.h>
using namespace std;
vector<int> findmissingandrepeating(vector<int>a){
    long long n= a.size();
    int xr=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        xr=xr^(i+1);
    }
    int bitno=0;
    while(1){
        if((xr &(1<<bitno))!=0){
            break;
        }
        bitno++;
    }
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        if((a[i] &(1<<bitno))!=0){
            one=one^a[i];
        }else{
            zero=zero^a[i];
        }
    }
    for(int i=1;i<=n;i++){
        if((i &(1<<bitno))!=0){
            one=one^i;
        }else{
            zero=zero^i;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==zero){
            cnt++;
        }
    }if(cnt==2) return {zero,one};
    else return {one,zero};
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> result = findmissingandrepeating(a);
    cout << "The repeating number is: " << result[0] << endl;
    cout << "The missing number is: " << result[1] << endl;
    
    return 0;
}