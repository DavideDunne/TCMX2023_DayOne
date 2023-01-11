#include <bits/stdc++.h>
using namespace std;

// void binarySearch(int n,int a,int b,int c){
//     if((a+c)>n){}
// }

int a,b,c;
// int maxPedazos(int n)
// {
//     if(n == 0) return 0;
//     if(n < 0) return INT_MIN;
//     return max(maxPedazos(n-a), max(maxPedazos(n-b), maxPedazos(n-c))) + 1;
// }
const int N = 4003;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     int m1, m2, m3;
//     cin>>n>>m1>>m2>>m3;
//     a = min(m1, min(m2, m3));
//     c = max(m1, max(m2, m3));
//     b = m1 + m2 + m3 - a - c;
//     // cout << a << " " << b << " " << c << "\n";
    
//     vector<int> dp(N, INT_MIN);
//     for (int i = 0; i*a <= c && i*a < N; i++)
//     {
//         dp[i*a] = i;
//     }
//     for (int i = 1; i*b <= c && i*b < N; i++)
//     {
//         dp[i*b] = max(dp[i*b], max(i, dp[i*b-a]+1));
//     }

//     // for(int i=0; i<=n; i++)
//     //     cout << dp[i] << endl;

//     for(int k = c; k <= n; k++)
//     {
//         m1 = dp[k-a];
//         m2 = dp[k-b];
//         m3 = dp[k-c];
//         dp[k] = max(m1, max(m2, m3)) + 1;
//     }

//     cout << dp[n] << endl;
// }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int m1, m2, m3;
    cin>>n>>m1>>m2>>m3;
    a = min(m1, min(m2, m3));
    c = max(m1, max(m2, m3));
    b = m1 + m2 + m3 - a - c;

    vector<int> dp(N, -1);
    dp[0] = 0;

    for(int k = 0; k <= n; k++)
    {
        if(k-a > -1)
            if(dp[k-a] > -1)
                dp[k] = dp[k-a] + 1;
        if(k-b > -1)
            if(dp[k-b] > -1)
                dp[k] = max(dp[k], dp[k-b] + 1);
        if(k-c > -1)
            if(dp[k-c] > -1)
                dp[k] = max(dp[k], dp[k-c] + 1);
    }
    cout << dp[n] << endl;
}