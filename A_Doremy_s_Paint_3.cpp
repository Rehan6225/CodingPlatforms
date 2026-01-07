#include <iostream>
#include <map>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        if(mp.size()<=2){
            if(mp.size()==2){
                auto it=mp.begin();//point to first element
                int f1=it->second;//frequency of first element
                it++;//point to second element
                int f2=it->second;//frequency of second element
                if(f1 == f2 || f1-f2 == 1 || f2-f1 == 1){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}