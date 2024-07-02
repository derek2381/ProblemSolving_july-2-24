// problem link
// https://www.codechef.com/problems/RATINGINPRAC


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        // your code goes here
        int flag = 1;
        for(int i = 0; i < n-1;i++){
            if(d[i] > d[i+1]){
                flag = 0;
                break;
            }
        }

        if(flag == 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

}
