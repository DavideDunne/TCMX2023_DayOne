#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a,b,c;
    int arr[3]={0,0,0};
    for (int i=0;i<n;i++){
        cin>>a>>b>>c;
        arr[0]+=a;
        arr[1]+=b;
        arr[2]+=c;
    }
    if(arr[0]==0 && arr[1]==0 && arr[2]==0){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
    return 0;
}