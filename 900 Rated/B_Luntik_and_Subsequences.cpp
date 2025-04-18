#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int count_ones = 0;
    int count_zeroes = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) count_ones++;
        else if (a[i] == 0) count_zeroes++;
    }

    if (count_ones == 0) {
        cout << 0 << '\n';
    } else {
        cout << (1LL << count_zeroes) * count_ones << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
