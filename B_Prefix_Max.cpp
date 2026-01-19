#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        //find max
        int max_val = arr[0];
        for(int i=1; i<n; i++) {
            if(arr[i] > max_val) {
                max_val = arr[i];
            }
        }
        cout<< max_val * n << endl;
    }
    return 0;
}