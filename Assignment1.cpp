/*
A collection of grayscale images is stored in memory as one continuous one-dimensional array, 
where each pixel occupies one array element. 
Each grayscale image has a resolution of 32 × 24 pixels (width × height), 
and the images are organized into batches of 8 images. 
Pixels within an image are stored from left to right and top to bottom (row-major order). 
Images within a batch are stored one after another, and batches are also stored one after another. 
Write a C++ program that reads a memory position (array index) and determines the corresponding:

a. batch number
b. image number within the batch
c. row
d. column

All numbers start from 0. Each image contains 32 x 24 = 768 pixels, and each batch therefore contains 8 x 768 = 6144 pixels. 
For example:
Enter the memory position: 7000

The position corresponds to
Batch: 1
Image: 1
Row: 2
Column: 24
*/
#include <iostream>
// #include <cstdint> // Not needed for this program, we need 4 bytes for the int type, int is same as int32_t.
using namespace std;

int main() {
    int position;
    cout << "Enter the memory position: ";
    cin >> position;

    //const the number of pixels per image and per batch
    const int PIXELS_PER_IMAGE = 32 * 24; //768
    const int IMAGES_PER_BATCH = 8;
    const int PIXELS_PER_BATCH = IMAGES_PER_BATCH * PIXELS_PER_IMAGE;

    //find the batch index
    int batch = position / PIXELS_PER_BATCH;
    //offset remaining memory index after batch
    int OFFSET_AFTER_BATCH = position % PIXELS_PER_BATCH;
    //find the image index
    int image = OFFSET_AFTER_BATCH / PIXELS_PER_IMAGE;
    //offset remaining memory index after image
    int OFFSET_AFTER_IMAGE = OFFSET_AFTER_BATCH % PIXELS_PER_IMAGE;
    //find the row
    int row = OFFSET_AFTER_IMAGE / 32;
    //find the column
    int column = OFFSET_AFTER_IMAGE % 32;

    cout << "\nThe position corresponds to" << endl;
    cout << "Batch: " << batch << endl;
    cout << "Image: " << image << endl;
    cout << "Row: " << row << endl;
    cout << "Column: " << column << endl;

    return 0;
}
