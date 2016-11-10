//
//  main.cpp
//  Selection Sort Practice
//
//  Created by ax on 11/9/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

void print_array(double list[], int list_size) {
    
    cout << "Array Values: \r";
    
    for (int i = 0; i < list_size; i++)
    {
        cout << list[i] << " ";
    }
    cout << "\r";
}

void select_sort(double list[], int list_size) {
    for (int i = 0; i < list_size; i++) {
        double current_min = list[i];
        int cur_min_idx = i;
        
        for (int j = i + 1; j < list_size; j++) {
            if (current_min > list[j]) {
                current_min = list[j];
                cur_min_idx = j;
            }
        }
        
        if (cur_min_idx != i) {
            list[cur_min_idx] = list[i];
            list[i] = current_min;
        }
    }
}

int main() {

    cout << "Selection Sort Practice \r";
    
    int const ARR_SIZE = 10;
    double arr[ARR_SIZE] = {0};
    srand(static_cast<int>(time(0))); // random seed
    
    for (int i = 0; i < ARR_SIZE; i++) {
        arr[i] = 1 + rand() % 10;
    }
    
    cout << "Pre Sort \r";
    print_array(arr, ARR_SIZE);
    cout << "Sorting... \r";
    select_sort(arr, ARR_SIZE);
    cout << "Post Sort \r";
    print_array(arr, ARR_SIZE);
    
    return 0;
}
