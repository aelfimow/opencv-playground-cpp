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

    cv::namedWindow("VideoPlayback-1", cv::WINDOW_AUTOSIZE);

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
            cv::imshow("VideoPlayback-1", frame);
            finished = (cv::waitKey(33) >= 0);
        }
    }

    cv::destroyWindow("VideoPlayback-1");

    return EXIT_SUCCESS;
}
