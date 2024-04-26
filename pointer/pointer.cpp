#include <iostream>

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* pointer = arr;

    int* pointerfor4 = pointer + 3;

    std::cout << "Elem 4:" << *pointerfor4 << "\n";

    return 0;
}