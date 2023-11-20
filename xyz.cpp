//SAKI
#include<bits/stdc++.h>
#define endll "\n"
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n,a,i;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back({a,i+1});
    }
    sort(v.begin(),v.end());
    if(v[0].first!=v[1].first)
    cout<< v[0].second <<endll;
    else
    cout<<"Still Rozdil"<<endll;
}