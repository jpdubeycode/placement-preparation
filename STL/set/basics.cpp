

// INSERT
/*
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // duplicate ignored

    for(auto x : s){
        cout << x << " ";
    }
}

*/

/*  ERASE

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s = {1,2,3,4,5};

    s.erase(3); // remove element

    for(auto x : s){
        cout << x << " ";
    }
}
    */

/*  //find

    #include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s = {10,20,30};

    auto it = s.find(20);

    if(it != s.end()){
        cout << "Found";
    } else {
        cout << "Not Found";
    }
}
*/

//TRAVERSE
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s = {4,1,7,3};

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
}
    