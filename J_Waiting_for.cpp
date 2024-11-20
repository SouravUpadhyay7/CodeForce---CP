#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    int n; 
    cin >> n;
 
    vector<string> events(n);
    vector<int> values(n);
    for (int i = 0; i < n; i++) {
        cin >> events[i] >> values[i];
    }
 
    int peopleAtStop = 0; 
 
    for (int i = 0; i < n; i++) {
        if (events[i] == "P") {
            
            peopleAtStop += values[i];
        } else if (events[i] == "B") {
           
            int seats = values[i];
 
           
            int remainingSeats = seats - peopleAtStop;
 
            if (remainingSeats > 0) {
               
                cout << "YES" << endl;
 
                
                remainingSeats--;
            } else {
                cout << "NO" << endl;
            }
 
            
            peopleAtStop = max(0, -remainingSeats);
        }
    }
 
    return 0;
}