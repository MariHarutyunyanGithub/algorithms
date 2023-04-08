// Implement the binary search algorithm.

#include <iostream>
#include <vector>

template <typename T>
int binary_search(const std::vector<T>& vec, int start, int end, T val)
{
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (vec[mid] == val) {
            return mid;
        }
        if (vec[mid] < val) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> vec{1, 2, 3, 5, 6, 8, 9, 10};
    int start = vec[0];
    int end = vec[vec.size() - 1];
    int key = 8;
    std::cout << binary_search(vec, start, end, key) << std::endl;
}