#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int>arr(3,-1);

    for(int i=0;i<2;i++){
        int input;
        cin >> input;
        arr[input-1] = 1;
    }
    for(int i = 0; i < 3; i++){
        if(arr[i] == -1){
            cout << i + 1;
        }
    }

    return 0;
}