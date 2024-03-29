#include<bits/stdc++.h>
#include<vector>

using namespace std;


vector<int> reverseArray(vector<int> a) {
    vector<int>v;
    for(int i=a.size()-1;i>=0;i--){
        v.push_back(a[i]);
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    int a;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    vector<int>res = reverseArray(arr);
    for(auto i : res){
        cout<<i<<" ";
    }
    
    
    return 0;
}