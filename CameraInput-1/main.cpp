#include <opencv2/opencv.hpp>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[])
{
    std::string const windowName { "CameraInput-1" };

    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);

    cv::VideoCapture cap;

    // Open first camera found in the system
    cap.open(0);

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
