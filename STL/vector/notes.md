# Vector in C++ STL 🚀

## 📌 What is Vector?

A **dynamic array** that can resize automatically.

* Contiguous memory allocation
* Fast access (O(1))
* Dynamic resizing

---

## ⚡ Time Complexity

| Operation     | Complexity |
| ------------- | ---------- |
| Access (v[i]) | O(1)       |
| push_back()   | O(1)*      |
| pop_back()    | O(1)       |
| insert()      | O(n)       |
| erase()       | O(n)       |
| size()        | O(1)       |

* Amortized O(1)

---

## 🧩 Declaration

```cpp
vector<int> v;
vector<int> v(5);        // size 5
vector<int> v(5, 10);    // 5 elements of value 10
```

---

## 🔥 Common Functions

### ➤ Add Elements

```cpp
v.push_back(10);
v.emplace_back(20); // faster
```

---

### ➤ Access Elements

```cpp
v[0];
v.at(0);  // safer
v.front();
v.back();
```

---

### ➤ Size & Capacity

```cpp
v.size();
v.capacity();
```

---

### ➤ Iteration

```cpp
for(int i = 0; i < v.size(); i++) cout << v[i];

for(auto it = v.begin(); it != v.end(); it++) cout << *it;

for(auto x : v) cout << x;
```

---

### ➤ Delete Elements

```cpp
v.pop_back();
v.erase(v.begin());        // first element
v.erase(v.begin()+1);      // specific index
```

---

### ➤ Clear

```cpp
v.clear();
```

---

### ➤ Insert

```cpp
v.insert(v.begin(), 100);
```

---

### ➤ Sort

```cpp
sort(v.begin(), v.end());
```

---

## ⚠️ Important Points

* Vector doubles capacity when full
* Insert/erase in middle is costly
* Use `emplace_back()` over `push_back()` when possible

---

## 🧠 Interview Questions

### Q1: Vector vs Array?

* Vector: dynamic
* Array: fixed size

---

### Q2: Why push_back is O(1)?

* Because of amortized resizing

---

### Q3: When NOT to use vector?

* Frequent insert/delete in middle → use list/set

---

## ✅ Best Practice

* Use `reserve()` if size known

```cpp
v.reserve(1000);
```

* Avoid unnecessary resizing

---

## 🎯 Conclusion

Vector is the **most used STL container** in coding interviews.
Master it completely.

