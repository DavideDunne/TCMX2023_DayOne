#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    int mult=0, nmult=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%3) nmult++;
        else mult++;
    }
    int restante=n/2;
    if(nmult>mult) {
        cout << 0 << '\n';
        for(int i=0; i<n; i++){
            if(a[i]%3 && restante > 0)
            {
                cout << 1;
                restante--;
            }
            else
                cout << 0;
        }
    }
    else{
        cout << 2 << '\n';
        for(int i=0; i<n; i++){
            if(a[i]%3==0 && restante > 0)
            {
                cout << 1;
                restante--;
            }
            else
                cout << 0;
        }
    }
}