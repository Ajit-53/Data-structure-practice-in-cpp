#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int data;
        cin>>data;
        v.push_back(data);
    }
    cin>>key;
    auto it=find(v.begin(),v.end(),key);
    int index=it-v.begin();
    cout<<index;

}