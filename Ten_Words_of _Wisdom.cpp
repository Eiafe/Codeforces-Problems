#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_q=INT_MIN;
        int reponse=0;
       for(int i=1;i<=n;i++){
         int l,q;
         cin>>l >> q;
         if(l>10){
             continue;

         }
         if(q>max_q){
            max_q=q;
            reponse=i;
         }


       }
       cout<< reponse<<endl;

    }




}
