#include <iostream>
using namespace std;

int main() {
	// Kadane's Algorithm
	// To calculate maximum subarray
	// Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
    // Output: 11
    // idea : looping once, calculate sum till that element and update max at end also if local sum is coming negative at any point, change (i)iterator to negative value+1 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int maximum =arr[0],runningcount = arr[0];
    for(int i=1; i<n;i++){
       
        runningcount =max(runningcount+arr[i],arr[i]);
        maximum = max( maximum,runningcount);
        
    }
    cout<<maximum;
}
