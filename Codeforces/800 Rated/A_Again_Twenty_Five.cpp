#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    double count =pow(5,n);
    count = count % 100;
    cout<<count<<endl;
   return 0;
}