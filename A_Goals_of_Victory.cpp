#include <iostream>
#include <map>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int n;
        cin>>n;
        int arr[n];
        int sum = 0;
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
            arr[i] = -arr[i];
        }
        for(int i=0;i<n-1;i++){
            sum+= arr[i];
        }
        cout<<sum<<endl;
    }
   return 0;
}