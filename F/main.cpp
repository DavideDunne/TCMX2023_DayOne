#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, num, ans = 0;
    cin >> n;
    int b[n];
    map<int, int> pares, impares;
    cin >> b[0];
    for(int i=1; i<n; i++){
        cin >> num;
        b[i]= b[i-1]^num;
    }
    
    for(int i=0; i<n; i++){
        if(i%2)
        {
            ans += impares[b[i]];
            impares[b[i]]++;
        }
        else
        {
            ans += pares[b[i]];
            pares[b[i]]++;
        }
    }

    cout << ans;
}