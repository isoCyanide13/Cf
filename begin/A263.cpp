#include<bits/stdc++.h>
using namespace std;

void set_matrix(int empt_matrix[5][5], int& x, int& y) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> empt_matrix[i][j];
            if(empt_matrix[i][j] == 1) {
                x = j;
                y = i;
            }
        }
    }
}

int find_horizintalShifts(int A[5][5], int x) {
    int h_shift = -1;
    if(x <= 2) h_shift = 2-x;
    else if (x > 2) h_shift = x-2;
    return h_shift;
}
int find_verticalShifts(int A[5][5], int y) {
    int v_shift = -1;
    if(y <= 2) v_shift = 2-y;
    else if (y > 2) v_shift = y-2;
    return v_shift;
}

int main() {
    int A[5][5];
    int x = -1, y = -1;
    set_matrix(A, x, y);
    int h_shift = find_horizintalShifts(A, x);
    int v_shift = find_verticalShifts(A, y);
    cout << h_shift + v_shift;
    return 0;
}