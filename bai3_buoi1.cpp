#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;

    vector<bool> nguyenTo(B + 1, true);
    nguyenTo[0] = nguyenTo[1] = false;

    // Gach cac boi cua moi so nguyen to, bat dau tu binh phuong cua no.
    for (int i = 2; i * i <= B; ++i) {
        if (nguyenTo[i]) {
            for (int j = i * i; j <= B; j += i) {
                nguyenTo[j] = false;
            }
        }
    }

    for (int n = A; n <= B; ++n) {
        if (nguyenTo[n]) {
            cout << n << '\n';
        }
    }

    return 0;
}
