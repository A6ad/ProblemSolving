#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Step 1: Sort and remove duplicates
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    // Step 2: Find the longest sequence where a[i+1] == a[i] + 1
    int max_mex = 0;
    int current_streak = 0;

    for (int i = 0; i < a.size(); i++) {
        if (i > 0 && a[i] == a[i - 1] + 1) {
            current_streak++;
        } else {
            current_streak = 1;
        }
        max_mex = max(max_mex, current_streak);
    }

    return max_mex;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}
