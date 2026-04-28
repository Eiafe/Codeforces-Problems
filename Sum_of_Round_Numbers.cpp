#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        int m=n;
        while(m>0){
            int last_digite=m%10;
            m/=10;

            if(last_digite>0){
                count++;
            }

        }
        cout<<count<<endl;
        int p=1;
        while(n>0){
          int last_digite=n%10;
          n/=10;
          if(last_digite!=0){
            cout<<last_digite*p <<endl;
          }
          p*=10;
        }
        cout<<" "<<endl;






  }

}
