#include <iostream>
#include <map>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        int n = 10;
        string arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
        }
        int score = 0;
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if(arr[i][j]=='X'){
                    int rowDist = min(i, n - 1 - i);
                    int colDist = min(j, n - 1 - j);
                    int points = min(rowDist, colDist) + 1;
                    score += points;
                }
            }
        }
        cout<<score<<endl;
    }
   return 0;
}