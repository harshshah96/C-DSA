#include <iostream>
#include <vector>
#include <list>

int main() {
    std::vector<std::list<int>> v;

    // Adding elements to the vector of lists
    v.push_back({1, 2, 3});
    v.push_back({4, 5});
    v.push_back({6, 7, 8, 9});

    // Accessing elements in the vector of lists
    std::cout << "Element at index 0: ";
    for (const int& num : v[2]) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
