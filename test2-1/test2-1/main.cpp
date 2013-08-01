//
//  main.cpp
//  test2-1
//
//  Created by luodan0318 on 13-8-1.
//  Copyright (c) 2013年 luodan0318. All rights reserved.
//

#include <highgui.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    IplImage* img = cvLoadImage(argv[1]);
    cvNamedWindow("Example1",CV_WINDOW_AUTOSIZE);
    cvShowImage("Example1", img);
    cvWaitKey(0);
    cvReleaseImage(&img);
    cvDestroyWindow("Example1");
    return 0;
}

