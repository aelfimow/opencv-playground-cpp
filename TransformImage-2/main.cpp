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
    std::string const windowOut1 { "Output Image 1" };
    std::string const windowOut2 { "Output Image 2" };
    std::string const windowOut3 { "Output Image 3" };

    cv::namedWindow(windowIn, cv::WINDOW_AUTOSIZE);
    cv::namedWindow(windowOut1, cv::WINDOW_AUTOSIZE);
    cv::namedWindow(windowOut2, cv::WINDOW_AUTOSIZE);
    cv::namedWindow(windowOut3, cv::WINDOW_AUTOSIZE);

    cv::imshow(windowIn, img);

    cv::Mat img2;
    cv::pyrDown(img, img2);
    cv::imshow(windowOut1, img2);

    cv::Mat img3;
    cv::pyrDown(img2, img3);
    cv::imshow(windowOut2, img3);

    cv::Mat img4;
    cv::pyrDown(img3, img4);
    cv::imshow(windowOut3, img4);

    cv::waitKey(0);

    cv::destroyWindow(windowIn);
    cv::destroyWindow(windowOut1);
    cv::destroyWindow(windowOut2);
    cv::destroyWindow(windowOut3);

    return EXIT_SUCCESS;
}
