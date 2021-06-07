#include <opencv2/opencv.hpp>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        return EXIT_FAILURE;
    }

    std::string const filename { argv[1] };

    std::string const windowName { "VideoPlayback-1" };

    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);

    cv::VideoCapture cap;
    cap.open(filename);

    bool finished = false;

    while (not finished)
    {
        cv::Mat frame;

        cap >> frame;

        finished = frame.empty();

        if (not finished)
        {
            cv::imshow(windowName, frame);
            finished = (cv::waitKey(33) >= 0);
        }
    }

    cv::destroyWindow(windowName);

    return EXIT_SUCCESS;
}
