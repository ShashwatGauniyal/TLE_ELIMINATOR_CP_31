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

int main()
{
    fast_io();
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        vector<int> frequency_of_characters(26, 0);
        for (int i = 0; i < n; i++) // n
            frequency_of_characters[s[i] - 'a']++;
 
        long long odd_frequency = 0;
        for (int i = 0; i < 26; i++) // 26
            odd_frequency += frequency_of_characters[i] % 2;
 
        if (odd_frequency > k + 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
