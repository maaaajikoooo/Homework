#include <iostream>
#include <math.h>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>

using namespace cv;
using namespace std;

int main() {
        // 载入原图
        Mat srcImage = imread("./Lucy.jpg");
        Mat dstImage1,dstImage2;        // 临时变量和目标图的定义
        Rect m_select;
        // 显示原图
        imshow("【原始图】", srcImage);

        //进行尺寸调整操作
        resize(srcImage, dstImage1, Size(srcImage.cols * 2, srcImage.rows * 2), (0, 0),(0, 0), 1);
        m_select = Rect(200,200,300,400);
        dstImage2 = dstImage1(m_select);
        imshow("【原图中心放大】", dstImage2);

        waitKey(0);
        return 0;
}


