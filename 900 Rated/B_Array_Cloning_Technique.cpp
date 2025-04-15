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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<ll, ll> freq;
    for (ll i = 0; i < n; i++) {
        freq[a[i]]++;
    }
    ll ans = 0;
    ll current_max_frequency = 0;
    for (auto it : freq) {
        current_max_frequency = max(current_max_frequency, it.second);
    }

    while (current_max_frequency<n)
    {
        ans++;
        if(current_max_frequency *2 <=n) {
            ans+= current_max_frequency;
            current_max_frequency *= 2;
        }
        else {
            ans += n - current_max_frequency;
            current_max_frequency = n;
        }
    }
    cout<<ans<<endl;
    // End of your logic
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