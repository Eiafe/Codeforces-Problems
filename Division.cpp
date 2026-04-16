#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
while(t--){
    int rating;
       cin >> rating;
       if(rating>=1900){
        cout<<"Division 1 "<<endl;
       }
       else if(rating>=1600 ||1899 <=rating ){
           cout<<"Division 2 "<<endl;
       }
       else if(rating>=1400 || 1599<=rating ){
          cout<<"Division 3 "<<endl;
       }
       else if(rating>=-5000 || 1399<=rating){
         cout<<"Division 4 " <<endl;
       }




    }




}
