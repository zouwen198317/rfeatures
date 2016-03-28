#include <cstdlib>
#include <iostream>
using namespace std;

#include <SurfKeypoints.h>
using namespace RFeatures;



int main( int argc, char **argv)
{
    cv::Mat image = cv::imread(argv[1]);
    if ( image.empty())
    {
        cerr << "No image loaded!" << endl;
        return EXIT_FAILURE;
    }   // end if

    cv::Mat fdImg = SurfKeypoints( image, 2500)();
    cv::namedWindow("Surf Keypoints");
    cv::imshow("Surf Keypoints", fdImg);

    cv::waitKey();

    return EXIT_SUCCESS;
}   // end main