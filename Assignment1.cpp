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

//Template code for the assignment//
 
#include <iostream>
using namespace std;

int main() {
    int position;

    int variable0, variable1, variable2, variable3, variable4;
    cout << "Enter the memory position: ";
    cin >> variable0;

    // enter your code here

    cout << "The position corresponds to\n";
    cout << "Batch: " << variable1 << endl;
    cout << "Image: " << variable2 << endl;
    cout << "Row: " << variable3 << endl;
    cout << "Column: " << variable4 << endl;

    return 0;
}

*/
#include <iostream>
using namespace std;

int main() {
    int position;// I dont understand why this variable is here, but I will leave it in case it is needed for something else.
    //6767676767676767-SIXXXXXXXXXXXX-SEVENNNNNNNNNNN-67676767676767//
    int mem, batch, image, row, column;
    cout << "Enter the memory position: ";
    cin >> mem;
    //Image resolution is 32x24, so each image has 768 (32 * 24) pixels. Each batch has 8 images, so each batch has 6144 (32 * 24 * 8) pixels.
    batch = (mem / (32 * 24 * 8));
    //Above line calculates the batch number by dividing the memory position by the total number of pixels in a batch (6144).
    image = (mem % (32 * 24 * 8)) / (32 * 24);
    //Above line calculates the image number by dividing the remainder of above calculation.
    row = (mem % (32 * 24)) / 32;
    //Above line calculates the row number by dividing the remainder by the number of columns (32).
    column = (mem % (32 * 24)) % 32;
    //Above line calculates the column number by taking the remainder of the remainder divided by the number of columns (32).

    cout << "The position corresponds to\n" << endl;
    cout << "Batch: " << batch << endl;
    cout << "Image: " << image << endl;
    cout << "Row: " << row << endl;
    cout << "Column: " << column << endl;

    return 0;
}