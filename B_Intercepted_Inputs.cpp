#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 200009

int main(){
    int testcase, arraysize;
    int array[MAX_SIZE], presence[MAX_SIZE];

    cin >> testcase;
    while (testcase--){
        cin >> arraysize;

        for (int i = 1; i<= arraysize; ++i){
            presence[i] = 0;
        }

        for(int i=1; i<= arraysize; ++i){
            cin>>array[i];
            presence[array[i]] = 1;
        }


        arraysize -= 2;

        for(int i = 1; i<= arraysize; ++i){
            if (presence[i] && arraysize % i == 0 && presence[arraysize / i]){
                cout << i << " " << arraysize / i << endl;
                break;
            }
        }
    }
    return 0;
}