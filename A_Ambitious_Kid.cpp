#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int count = abs(arr[0]);
    for(int i=0;i<n;i++){
        if(abs(arr[i]-0) < count){
            count = abs(arr[i]-0);
        }
    }
    cout<<count<<endl;

   return 0;
}