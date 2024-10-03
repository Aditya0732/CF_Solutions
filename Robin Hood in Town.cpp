#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        long long sum = 0;
        int max_index = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] > a[max_index]) {
                max_index = i;
            }
        }
        
        long long left = 0, right = 1e18;
        long long result = -1;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long new_sum = sum + mid;
            double avg = (double)new_sum / n;
            int unhappy = 0;
            
            for (int i = 0; i < n; i++) {
                long long wealth = (i == max_index) ? a[i] + mid : a[i];
                if (wealth < avg / 2) {
                    unhappy++;
                }
            }
            
            if (unhappy > n / 2) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}