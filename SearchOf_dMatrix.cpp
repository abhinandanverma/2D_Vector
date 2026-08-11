#include <iostream>
using namespace std;

bool searchMatrix(int arr[][4], int m, int n, int target) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == target)
                return true;  
        }
    }
    return false;  
}

int main() {
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    int m = 3, n = 4;  
    int target = 5;

    if(searchMatrix(arr, m, n, target))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
