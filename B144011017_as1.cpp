#include <iostream>
using namespace std;

int main() {
    int position;

    int mem, batch, image, row, column;
    cout << "Enter the memory position: ";
    cin >> mem;

    batch = (mem / (32 * 24 * 8));
    image = (mem % (32 * 24 * 8)) / (32 * 24);
    row = (mem % (32 * 24)) / 32;
    column = (mem % (32 * 24)) % 32;

    cout << "The position corresponds to\n" << endl;
    cout << "Batch: " << batch << endl;
    cout << "Image: " << image << endl;
    cout << "Row: " << row << endl;
    cout << "Column: " << column << endl;

    return 0;
}