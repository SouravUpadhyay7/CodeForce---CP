#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        long long sum = 0;

       
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

     
        if (sum % n != 0) {
            cout << -1 << endl;
            continue;
        }

        long long target = sum / n; 
        long long operations = 0;  

      
        for (int i = 0; i < n - 1; i++) {
            int diff = a[i] - target; 
            a[i] -= diff;              
            a[i + 1] += diff;          
            operations += abs(diff);   
        }

        cout << operations << endl;  
    }

    return 0;
}

