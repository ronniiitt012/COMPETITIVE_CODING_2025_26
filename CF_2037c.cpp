
#include <bits/stdc++.h>
using namespace std;

bool is_composite(int x) {
    if (x <= 3) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    iota(p.begin(), p.end(), 1);

    do {
        bool ok = true;
        for (int i = 0; i + 1 < n; i++) {
            if (!is_composite(p[i] + p[i + 1])) {
                ok = false;
                break;
            }
        }

        if (ok) {
            for (int x : p)
                cout << x << " ";
            cout << "\n";
            return 0;
        }

    } while (next_permutation(p.begin(), p.end()));

    cout << -1 << "\n";
    return 0;
}
