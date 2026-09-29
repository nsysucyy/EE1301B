
#include <iostream>
using namespace std;
int main() {
    int position;
    cout << "Enter the memory position: ";
    cin >> position;
    const int PIXELS_PER_IMAGE = 32 * 24; //768
    const int IMAGES_PER_BATCH = 8;
    const int PIXELS_PER_BATCH = IMAGES_PER_BATCH * PIXELS_PER_IMAGE;
    int batch = position / PIXELS_PER_BATCH;
    int OFFSET_AFTER_BATCH = position % PIXELS_PER_BATCH;
    int image = OFFSET_AFTER_BATCH / PIXELS_PER_IMAGE;
    int OFFSET_AFTER_IMAGE = OFFSET_AFTER_BATCH % PIXELS_PER_IMAGE;
    int row = OFFSET_AFTER_IMAGE / 32;
    int column = OFFSET_AFTER_IMAGE % 32;
    cout << "\nThe position corresponds to" << endl;
    cout << "Batch: " << batch << endl;
    cout << "Image: " << image << endl;
    cout << "Row: " << row << endl;
    cout << "Column: " << column << endl;
    return 0;
}
