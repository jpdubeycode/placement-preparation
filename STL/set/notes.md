# 🚀 C++ STL `set` – Complete Guide

This repository contains everything you need to learn and master the **`set` container** in C++ STL.

---

## 📌 What is `set`?

`set` is a container in C++ STL that:

* Stores **unique elements**
* Maintains **sorted order**
* Provides **O(log n)** operations

---

## 🧠 Key Features

✔ No duplicate elements
✔ Automatically sorted
✔ Fast insertion, deletion, search
✔ Implemented using Red-Black Tree

---

## 🛠️ Basic Syntax

```cpp
#include <set>
using namespace std;

set<int> s;
```

---

## ⚙️ Common Operations

### Insert

```cpp
s.insert(10);
s.insert(5);
```

### Traverse

```cpp
for(auto x : s){
    cout << x << " ";
}
```

### Find

```cpp
auto it = s.find(10);
if(it != s.end()){
    cout << "Found";
}
```

### Erase

```cpp
s.erase(10);
```

---

## 🔄 Types of Sets

| Type            | Description       |
| --------------- | ----------------- |
| `set`           | Unique + Sorted   |
| `multiset`      | Allows duplicates |
| `unordered_set` | No order, faster  |

---

## 🔍 Advanced Functions

### Lower Bound

```cpp
s.lower_bound(3); // ≥ 3
```

### Upper Bound

```cpp
s.upper_bound(3); // > 3
```

---

## 🧩 Example

```cpp
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s = {5,1,3,5};

    for(auto x : s){
        cout << x << " ";
    }
}
```

### Output

```
1 3 5
```

---

## 💡 When to Use?

Use `set` when:

* You need **unique values**
* You need **sorted data**
* You need **fast lookup**

---

## 📂 Folder Structure

* `basics/` → Basic operations
* `advanced/` → Advanced concepts
* `problems/` → Practice questions

---

## 🎯 Practice Problems

* Remove duplicates from array
* Count distinct elements
* Find kth smallest element

---

## 🤝 Contribute

Feel free to add more problems or improve code!

---

## ⭐ Star This Repo

If this helped you, give it a ⭐ on GitHub!
