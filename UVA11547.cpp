#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n/=10;
        cout<<abs(n%10)<<"\n";
    }

    return 0;
}