#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        if(num<4){
            cout<<num<<endl;
        }
        else if(num>=4){
           cout<<num%2<<endl;
        }
        
    }
   return 0;
}