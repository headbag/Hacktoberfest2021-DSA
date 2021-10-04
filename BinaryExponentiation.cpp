#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll power(ll a, ll k)
{
    ll res = 1;
    while (k)
    {
        if (k % 2)
        {
            res = (res * a) % mod;
            k--;
        }
        else
        {
            a = (a * a) % mod;
            k /= 2;
        }
    }
    return res % mod;
}
int main(){ 
ll a = 2, k = 5;
    cout << power(a, k) << endl;
}
