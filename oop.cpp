#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
    string name;
    cout << "Enter image filename: ";
    cin >> name;
    Mat img = imread(name);
    if (img.empty()) {
        cout << "Error loading image!";
        return -1;
    }
    int thick = 30;
    Scalar color(80, 40, 200);
    Mat framed;
    copyMakeBorder(img, framed, thick, thick, thick, thick, BORDER_CONSTANT, color);
    imwrite("framed_" + name, framed);
    cout << "Framed image saved as framed_" << name << endl;
    return 0;
}

