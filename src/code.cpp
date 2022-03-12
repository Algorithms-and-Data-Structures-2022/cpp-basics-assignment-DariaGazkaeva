#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int dif = left - right;
    return dif * dif;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    int x = 0;

    if (mask < 0 | bit_pos < 0) {
      return false;
    }

    for (int i = 0; i <= bit_pos; i++) {
      x = mask % 2;
      mask = mask / 2;
    }
    return x == 1;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    if (left >= middle) {
      if (left >= right) {
        return left;
      } else {
        return right;
      }
    } else {
      if (middle >= right) {
        return middle;
      } else {
        return right;
      }
    }
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left != nullptr & right != nullptr) {
      int x = *left;
      *left = *right;
      *right = x;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (length <= 0 || arr == nullptr) return 0;
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (length <= 0 || arr == nullptr) return nullptr;
    int* x = &arr[0];
    for (int i = 0; i < length; i++) {
      if (*x < arr[i]) {
        x = &arr[i];
      }
    }
    return x;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length <= 0) return nullptr;
    int* arr = new int[length];
    std::fill(arr, arr + length, init_value);
    return arr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in == nullptr || length <= 0) return nullptr;
    int* arr = new int[length];
    std::copy(arr_in, arr_in + length, arr);
    return arr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
      return;
    } else if (length <= 0) {
      os << "Invalid argument: length\n";
      return;
    }
    if (k <= 0) {
      os << "Invalid argument: k\n";
      return;
    }
    for (int i = 0; i < length; i += k) {
      os << arr[i] << "\t";
    }
  }
}  // namespace assignment
