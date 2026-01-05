#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int countEven =0 , countOdd =0, countPositive=0, countNegative=0;
    while(n--){
        int a;
        cin>>a;
        if( a%2 == 0 ){
            countEven++;
        }
        if(a%2 != 0){
            countOdd++;
        }
        if(a>0){
            countPositive++;
        }
        if(a<0){
            countNegative++;
        }
    }
    cout<<"Even: "<<countEven<<endl;
    cout<<"Odd: "<<countOdd<<endl;
    cout<<"Positive: "<<countPositive<<endl;
    cout<<"Negative: "<<countNegative<<endl;
    return 0;
}