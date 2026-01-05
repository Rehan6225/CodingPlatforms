#include <iostream>
using namespace std;
int main(){
    int n,flag =0;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}