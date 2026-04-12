#include <iostream>
#include <string>

using namespace std;

// Ham ve hang ngang: + - - - - +
void print_row(int cells) {
    for (int i = 0; i < cells; i++) cout << "+ - - - - ";
    cout << "+" << endl;
}

// Ham ve cot doc: |         |
void print_cols(int cells) {
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < cells; i++) cout << "|         ";
        cout << "|" << endl;
    }
}

// Ham ve grid n x n
void draw_grid(int size) {
    for (int i = 0; i < size; i++) {
        print_row(size);
        print_cols(size);
    }
    print_row(size);
}

int main() {
    cout << "Grid 2x2:" << endl;
    draw_grid(2);
    
    cout << "\nGrid 4x4:" << endl;
    draw_grid(4);
    
    return 0;
}