#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t) {
        int tc = t;
        int n,m,i,j;
        cin>>n>>m;
        while(tc--) {
            cin>>i>>j;
            i-=n;
            j-=m;
            if(i==0 || j==0) {
                cout<<"divisa\n";
            }
            else if(i>0) {
                if(j>0) {
                    cout<<"NE\n";
                }
                else {
                    cout<<"SE\n";
                }
            }
            else {
                if(j>0) {
                    cout<<"NO\n";
                }
                else {
                    cout<<"SO\n";
                }
            }
        }
        cin>>t;
    }
    return 0;
}