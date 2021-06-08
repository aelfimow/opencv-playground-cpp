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

    cv::namedWindow(windowIn, cv::WINDOW_AUTOSIZE);
    cv::namedWindow(windowOut1, cv::WINDOW_AUTOSIZE);

    cv::imshow(windowIn, img);

    cv::Mat img_gry;
    cv::Mat img_cny;

    cv::cvtColor(img, img_gry, cv::COLOR_BGR2GRAY);
    cv::Canny(img_gry, img_cny, 10, 100, 3, true);

    cv::imshow(windowOut1, img_gry);
    cv::imshow(windowOut2, img_cny);

    cv::waitKey(0);

    cv::destroyWindow(windowIn);
    cv::destroyWindow(windowOut1);
    cv::destroyWindow(windowOut2);

    return EXIT_SUCCESS;
}
