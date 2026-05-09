#include<bits/stdc++.h>
using namespace std;
int main(){
    int ary[101][101];
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
                cin>>ary[i] [j];

        }
    }
    for(int i=1;i<=n;i++){
        for(int j=m;j>=1;j--){
            cout<<ary[i][j]<<' ';

    }
    cout<<endl;



}
}
