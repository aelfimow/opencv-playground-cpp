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

    std::string const windowName { "LoadImageFile-1" };

    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);
    cv::imshow(windowName, img);

    cv::waitKey(0);

    cv::destroyWindow(windowName);

    return EXIT_SUCCESS;
}
