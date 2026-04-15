#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    long long maxsum = LLONG_MIN;
    long long sum = 0;

    for(int i = 0; i < n; i++){
        sum += nums[i];
        maxsum = max(maxsum, sum);

        if(sum < 0){
            sum = 0;
        }
    }

    cout << maxsum;
}