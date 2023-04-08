// Implement the insertion sort algorithm.

#include <iostream>
#include <vector>

template <typename T>
void insertion_sort(std::vector<T>& vec)
{
    for (int i{1}; i < vec.size(); ++i) {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = key;
    }
}

int main() {
    std::vector<int> vec = {1, 2, 7, 2, 3, 4, 1, 8, -6, 1, 0};
    for (int i{}; i < vec.size(); ++i){
        std::cout << vec[i] << " ";
    }    
    std::cout << std::endl;
    insertion_sort(vec);
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}