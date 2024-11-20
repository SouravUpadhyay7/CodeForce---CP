#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        char a = s[0]; 
        char op = s[1]; 
        char b = s[2]; 

        if ((a < b && op == '<') || (a > b && op == '>') || (a == b && op == '=')) {
            
            cout << s << endl;
        } else {
            
            if (a < b) {
                op = '<';
            } else if (a > b) {
                op = '>';
            } else {
                op = '=';
            }
            cout << a << op << b << endl;
        }
    }

    return 0;
}

