#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    // Adding elements
    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);

    // Access
    cout << v[0] << endl;
    cout << v.at(1) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;

    // Size
    cout << v.size() << endl;

    // Iteration
    for(auto x : v) cout << x << " ";
    cout << endl;

    // Remove
    v.pop_back();

    // Insert
    v.insert(v.begin(), 5);

    // Erase
    v.erase(v.begin());

    return 0;
}