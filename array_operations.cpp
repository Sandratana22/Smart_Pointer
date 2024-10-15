#include "array_operations.h"

using namespace std; 

namespace calculateArray {
    unique_ptr<int[]> arr; 
    int size = 0;                

    void intNumbers() {
        size = 0;
        int input;

        arr = make_unique<int[]>(1);

       cout << "Enter numbers (-1 to stop):" << endl;
        while (true) {
            cout << "Enter an integer number: " << endl; 
            cin >> input;

            if (input == -1) {
                break;
            }

            arr[size] = input;
            ++size;

            unique_ptr<int[]> temp(new int[size + 1]);

            for (int i = 0; i < size; ++i) {
                temp[i] = arr[i];
            }

            arr = move(temp);
        }
    }

    int Sum() {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum;
    }
}
