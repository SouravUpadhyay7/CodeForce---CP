#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        int n;  // Length of the array for this test case
        cin >> n;
        vector<int> a(n);
        
        // Read the array
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Use a map to count the frequency of each number
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            freq[a[i]]++;
        }
        
        int score = 0;
        
        // Calculate the score based on pairs
        for (auto& entry : freq) {
            score += entry.second / 2;  // For each number, count how many pairs can be made
        }
        
        // Output the score for this test case
        cout << score << endl;
    }
    
    return 0;
}
