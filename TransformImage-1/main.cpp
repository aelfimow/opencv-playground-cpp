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

    std::string const windowIn { "Input Image" };
    std::string const windowOut { "Output Image" };

    cv::namedWindow(windowIn, cv::WINDOW_AUTOSIZE);
    cv::namedWindow(windowOut, cv::WINDOW_AUTOSIZE);

    cv::imshow(windowIn, img);

    cv::Mat img2;
    cv::GaussianBlur(img, img2, cv::Size(5, 5), 3, 3);
    cv::GaussianBlur(img2, img2, cv::Size(5, 5), 3, 3);

    cv::imshow(windowOut, img2);

    cv::waitKey(0);

    cv::destroyWindow(windowIn);
    cv::destroyWindow(windowOut);

    return EXIT_SUCCESS;
}
