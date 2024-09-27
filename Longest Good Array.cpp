#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int prev = 1,ans=1,n=l;

        while(n + prev <= r){
            n = n + prev;
            prev = prev + 1;
            ans = ans + 1;
        }
        cout << ans << endl;
    }

    return 0;
}