#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L, R;
    cin >> L >> R;

    vector<int> tongUoc(R + 1, 0);

    // Cong uoc d vao cac boi cua d, bat dau tu 2*d de khong tinh chinh no.
    for (int d = 1; d <= R / 2; ++d) {
        for (int boi = 2 * d; boi <= R; boi += d) {
            tongUoc[boi] += d;
        }
    }

    int dem = 0;
    for (int n = L; n <= R; ++n) {
        if (tongUoc[n] > n) {
            ++dem;
        }
    }

    cout << dem << '\n';
    return 0;
}
