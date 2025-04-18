#include <bits/stdc++.h>

using namespace std;

// Debugging Macros
template<typename A, typename B>
ostream& operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream& operator<<(ostream &os, const T_container &v) {
    os << '{'; string sep;
    for (const T &x : v) os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H; dbg_out(T...);
}

#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// Type Aliases
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sza(x) ((int)(x).size())

// Constants
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

// Fast Input-Output
void fast_io() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// Solve function
void solve() {
    // Add your logic here
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count_of_zeroes = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0)
        count_of_zeroes++;
    }

    bool found_zero = false;
    int left  = 0;
    int right = n-1;
    
    while(a[left]==0)left++;
    while (a[right]==0)right--;

    for(int i=left;i<=right;i++){
        if(a[i]==0)found_zero=true;
    }
    // case jab sare elements 0 ho array ke
    if(count_of_zeroes==n) cout<<0<<endl;
    // case jab sirf beech ka ek segment aisa ho jo 0 na ho baki agal bagal ke sare elemnts zero ho
    else if(found_zero==false) cout<<1<<endl;
    // case jab segment ke beech me bhi 0 present ho jiski wahaj se 2 answer aa gaya ni to 2 se jada nahi aa sakta
    else cout<<2<<endl;
    
    
}

// Main Function
int main() {
    fast_io();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}