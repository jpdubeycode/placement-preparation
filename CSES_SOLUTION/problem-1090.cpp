#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        a[i]=p;
    }

    sort(a.begin(),a.end());
    int i=0;
    int j=n-1;
    int gondolas=0;


   while(i<=j){
        if(a[i]+a[j]<=x){
            i++;//pair with lightest

        }
        j--; //heaviest always goes
        gondolas++;
    }
    cout<<gondolas;





}