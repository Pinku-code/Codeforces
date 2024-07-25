#include<iostream>
#include<vector>
using namespace std;

int main(){

int n,p,a[10000];
cin>>n;

while(n--){
    cin>>p;
    int r=0,d=0;
    if(p>=1000){
        r=p%1000;
        a[d++]=p-r;
        p%=1000;
    }
    if(p>=100){
        r=p%100;
        a[d++]=p-r;
        p%=100;
    }
    if(p>=10){
        r=p%10;
        a[d++]=p-r;
        p%=10;
    }
    if(p<10 && p>0){
        a[d++]=p;
    }

    vector<int> pa;
    for(int i=0;i<d;i++){
        pa.push_back(a[i]);
    }

    cout<<pa.size()<<endl;
    for(int i=0;i<pa.size();i++){
        cout<<pa[i]<<" ";
    }
    cout<<endl;

}



return 0;
}