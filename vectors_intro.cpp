// Vectors are dynamic arrays in C++ (part of STL).

#include <vector>


// 🆕 Declaration
std::vector<int> v;               // Empty vector of ints
std::vector<int> v(5);            // Vector of size 5, default initialized
std::vector<int> v(5, 10);        // Size 5, all values = 10
std::vector<int> v2 = {1, 2, 3};  // Initialized with values

➕ Adding Elements
v.push_back(20);       // Adds element at end

❌ Removing Elements
v.pop_back();          // Removes last element


🎯 Accessing Elements
v[0];           // Direct access (no bounds check)
v.at(1);        // Access with bounds check
v.front();      // First element
v.back();       // Last element


🔁 Iterating
// Using index
for (int i = 0; i < v.size(); i++)
    std::cout << v[i] << " ";

// Using range-based loop
for (int x : v)
    std::cout << x << " ";

// Using iterator
for (auto it = v.begin(); it != v.end(); ++it)
    std::cout << *it << " ";

📏 Useful Functions
v.size();        // Number of elements
v.empty();       // Check if empty
v.clear();       // Remove all elements
v.resize(10);    // Resize vector
v.insert(v.begin() + 2, 99);      // Insert 99 at index 2
v.erase(v.begin() + 1);           // Remove element at index 1


🔄 2D Vectors
std::vector<std::vector<int>> matrix(3, std::vector<int>(4, 0));
// 3x4 matrix initialized with 0



