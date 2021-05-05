#include <iostream>


int binary_search(int &value, int *arr, int &left, int &right) {
    int mid = (left + right) / 2;

    if (arr[mid] == value) return mid;

    if (left == right) {
        return -1;
    }

    if (arr[mid] < value) {
        mid++;
        return binary_search(value, arr, mid, right);
    } else {
        mid--;
        return binary_search(value, arr, left, mid);
    }
}

int main() {
    int* arr_ = new int[10] {1,1,2,3,4,5,5,5,7,9};
    int value = 7;
    int r = 9;
    int l = 0;
    int result = binary_search(value, arr_, l, r);

    std::cout << result;

    return 0;
}
