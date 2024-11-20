#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin >> t;
    
    while (t--) {
        int n;  
        cin >> n;
        vector<int> a(n);
        
       
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
       
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            freq[a[i]]++;
        }
        
        int score = 0;
        
       
        for (auto& entry : freq) {
            score += entry.second / 2;  
        }
        
       
        cout << score << endl;
    }
    
    return 0;
}
