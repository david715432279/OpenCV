//
//  main.cpp
//  test2-2
//
//  Created by luodan0318 on 13-8-1.
//  Copyright (c) 2013年 luodan0318. All rights reserved.
//

//play the AVI file in the disk
#include "highgui.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    cvNamedWindow("Example2", CV_WINDOW_AUTOSIZE);
    CvCapture* capture = cvCreateFileCapture(argv[1]);
    IplImage* frame;
    while(1){
        frame = cvQueryFrame(capture);
        if(!frame)
            break;
        cvShowImage("Example2", frame);
        char c = cvWaitKey(33);
        if (c == 27)
            break;
    }
    cvReleaseCapture(&capture);
    cvDestroyWindow("Example2");
    return 0;
}

