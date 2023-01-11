#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int ans;
    for(int i=0;i<t;i++){
        long long a;
        long long b;
        int c,d;
        c = 0;
        d = 0;
        cin>>a>>b;
        while(!(a&1)){
            a = a>>1;
            c++;
        }
        while(!(b&1)){
            b = b>>1;
            d++;
        }
        // cout << a << " " << b <<" "<< c << " " << d << "\n";
        
        if(a==b) ans=(abs(c-d)+2)/3;
        else ans=-1;
        cout<<ans<<endl;
    }
}