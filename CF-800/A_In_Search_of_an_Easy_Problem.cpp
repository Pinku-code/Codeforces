#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tag=0;

    cin>>n;
    int s[105];

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        tag+=s[i];
    }

    if(tag>0)
        cout<<"HARD";
    else
        cout<<"EASY";
    cout<<endl;

    return 0;
}