#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    unordered_map<int, int> frequency; // To store the occurrences of each number

    while (q--) {
        int z, x;
        cin >> z >> x;

        if (z == 1) {
            // Add x to the array (increment its count in the map)
            frequency[x]++;
        } else if (z == 2) {
            // Print the occurrence of x
            cout << frequency[x] << endl;
        }
    }

    return 0;
}
