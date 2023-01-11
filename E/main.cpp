#include <bits/stdc++.h>
using namespace std;

set<int> setsito; 
int n, s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >>n;
    for(int i=0; i<n; i++){
        cin >>s;
        setsito.insert(s);
    }
    setsito.erase(*setsito.begin());
    if(setsito.size()==0) cout << "NO";
    else cout << *setsito.begin();
}