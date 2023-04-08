// Implement the quick sort algorithm.

#include <iostream>
#include <vector>

template <typename T>
void printArray(std::vector<T> vec) {
  for (int i = 0; i < vec.size(); ++i){
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
}

template <typename T>
int partition(std::vector<T>& vec, int low, int high) 
{    
  int pivot = vec[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (vec[j] <= pivot) {
      ++i;
      std::swap(vec[i], vec[j]);
    }
  }
  std::swap(vec[i + 1], vec[high]);
  return (i + 1);
}

template <typename T>
void quickSort(std::vector<T>& vec, int low, int high) {
  if (low < high) {      
    int pi = partition(vec, low, high);
    quickSort(vec, low, pi - 1);
    quickSort(vec, pi + 1, high);
  }
}

int main() {
  std::vector<int> data = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);
  printArray(data);  
  quickSort(data, 0, n - 1);
  printArray(data);
}