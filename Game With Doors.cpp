#include <iostream>
#include <algorithm>

using namespace std;

int countIntersectionBlocks(int a1, int b1, int a2, int b2) {
    if (a1 > b1) swap(a1, b1);
    if (a2 > b2) swap(a2, b2);

    int start = max(a1, a2);
    int end = min(b1, b2);

    return max(0, end - start + 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, b1, a2, b2;
        
        cin >> a1 >> b1;
        
        cin >> a2 >> b2;

        int result = countIntersectionBlocks(a1, b1, a2, b2);

        if (result > 0) {
            if(a1 == a2 && b1 == b2){
                cout<< result - 1;
            } else if(a1 == a2 || b1 == b2){
                cout<<result;
            } else{
                cout<<result + 1;
            }
        } else {
            cout << 1;
        }

        cout << endl;
    }

    return 0;
}