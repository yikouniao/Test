/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年09月18日 星期日 12时43分45秒
 ************************************************************************/

#include <iostream>

using namespace std;

#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char** argv) {
  if (argc != 2) {
    cout << "usage: DisplayImage.out <Image_Path>\n";
    return -1;
  }

  Mat img = imread(argv[1], 1);

  if (!img.data) {
    cout << "No image date.\n";
    return -1;
  }

  namedWindow("Display Image");
  imshow("Display Image", img);

  waitKey(0);

  return 0;
}
