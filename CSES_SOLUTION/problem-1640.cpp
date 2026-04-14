#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    unordered_map<int,int> mp;
    mp.reserve(n);
mp.max_load_factor(0.7);

    for(int i = 0; i < n; i++){
        int complement = target - nums[i];

        if(mp.find(complement) != mp.end()){
            cout << mp[complement] + 1 << " " << i + 1;
            return 0;   // ✅ stop immediately
        }

        mp[nums[i]] = i;
    }

    cout << "IMPOSSIBLE";
}