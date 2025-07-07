#include<bits/stdc++.h>
using namespace std;
vector<int> findmissingandrepeating(vector<int>a){
    long long n = a.size();
    long long sn=(n*(n+1))/2;
    long long s2n=(n*(n+1)*(2*n+1))/6;
    long long s=0,s2=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        s2+=(long long)a[i]*(long long )a[i];
    }
    long long val1=s-sn;  //x-y ->1
    long long val2=s2-s2n;  //x^2-y^2
    // x^2-y^2=(x-y)(x+y)
    // val2=val1*(x+y)
    // x+y=val2/val1
    val2=val2/val1; //x+y ->2
    // Now we have two equations:
    long long x=(val1+val2)/2;
    long long y=x-val1;
    return {(int)x,(int)y};
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