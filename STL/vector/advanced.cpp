#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 3};

    // Sort
    sort(v.begin(), v.end());

    // Reverse
    reverse(v.begin(), v.end());

    // Max / Min
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end()) << endl;

    // Binary Search
    if(binary_search(v.begin(), v.end(), 3)) {
        cout << "Found" << endl;
    }

    // Count
    cout << count(v.begin(), v.end(), 3) << endl;

    return 0;
}