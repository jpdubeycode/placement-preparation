#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>events;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        events.push_back({a,1});//arrival
        events.push_back({b,-1});//leaving
    }
    sort(events.begin(),events.end());
    int curr=0,max_cust=0;
    for(auto e:events){
        curr +=e.second;
        max_cust=max(max_cust,curr);
    }
    cout<<max_cust<<endl;

}