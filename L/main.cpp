#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n=0;
    int s=0;
    long long mov=0;
    cin>>n>>s;
    vector<int>a(n);
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int m=n/2;
    if(a[m]<s){
        while(a[m]<s && m<n){
            mov += s-a[m];
            m+=1;
        }
    }
    else if(a[m]>s){
        while(a[m]>s && m>=0){
            mov+=a[m]-s;
            m-=1;
        }
    }
    cout<<mov;
}