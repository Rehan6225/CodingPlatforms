#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    int total = 0;
    for(int i = 0; i<n;i++ ){
        total += max - a[i];
    }
    cout<<total;

    return 0;
}