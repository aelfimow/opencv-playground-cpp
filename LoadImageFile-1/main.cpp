#include <opencv2/opencv.hpp>
#include <cstdlib>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        return EXIT_FAILURE;
    }

    cv::Mat img = cv::imread(argv[1], -1);

    if (img.empty())
    {
        return EXIT_FAILURE;
    }

    cv::namedWindow("LoadImageFile-1", cv::WINDOW_AUTOSIZE);
    cv::imshow("LoadImageFile-1", img);

    cv::waitKey(0);

    cv::destroyWindow("LoadImageFile-1");

    return EXIT_SUCCESS;
}
