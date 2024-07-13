// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1491
#include<bits/stdc++.h>
using namespace std;
int main() {
    // 360+360+90+360+90+90 = 1350 for 10 
    // 360+360+270+360+270+270 = 1890 for 30
    int a,b,c,d;
    while(scanf("%d %d %d %d", &a,&b,&c,&d) && (a||b||c||d)) {
        cout<<(1080 + ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9)<<"\n";
    }
    return 0;
}


