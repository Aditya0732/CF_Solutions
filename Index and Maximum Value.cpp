#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[n];

        int max = -1;
        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            arr[i] = input;
            if(arr[i] > max){
                max = arr[i];
            }
        }

      while(m--){
        char c;
        int l,r;
        cin >> c >> l >> r;
        
        
            if(c == '+'){
                if(max <= r && max >= l){
                   max = max + 1;
                }
            }else if(c == '-'){
                if(max <= r && max >= l){
                   max = max - 1;
                }
            }
            
        
        if(m > 0){
            cout << max << " ";
        }
        else if(m == 0){
            cout << max << endl;
        }
      }

    }

    return 0;
}