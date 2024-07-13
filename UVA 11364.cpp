// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2349
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        int a = INT_MIN,b = INT_MAX,temp;
        for(int i=0;i<n;i++) {
            cin>>temp;
            a = max(a,temp);
            b = min(b,temp);
        }
        cout<<2*(a-b)<<"\n";
    }
    return 0;
}