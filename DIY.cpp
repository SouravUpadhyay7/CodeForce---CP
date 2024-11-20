#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        vector<int> x, y;
        for (auto& p : freq) {
            if (p.second >= 2) {
                if (p.second >= 4) {
                    x.push_back(p.first);
                    y.push_back(p.first);
                }
                x.push_back(p.first);
                y.push_back(p.first);
            }
        }

        if (x.size() < 4) {
            cout << "NO" << endl;
        } else {
            sort(x.begin(), x.end());
            sort(y.begin(), y.end());
            cout << "YES" << endl;
            cout << x[0] << " " << y[1] << " " << x[0] << " " << y[2] << " " << x[1] << " " << y[1] << " " << x[1] << " " << y[2] << endl;
        }
    }

    return 0;
}

