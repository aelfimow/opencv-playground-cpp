#include <opencv2/opencv.hpp>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[])
{
    std::string const windowName { "CameraInput-2" };

    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);

    cv::VideoCapture cap;

    // Open first camera found in the system
    cap.open(0);

    auto fps = cap.get(cv::CAP_PROP_FPS);
    auto width = cap.get(cv::CAP_PROP_FRAME_WIDTH);
    auto height = cap.get(cv::CAP_PROP_FRAME_HEIGHT);

    cv::Size frameSize(static_cast<int>(width), static_cast<int>(height));

    cv::VideoWriter writer;
    writer.open("video.avi", cv::VideoWriter::fourcc('M', 'J', 'P', 'G'), fps, frameSize);

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

            if (not finished)
            {
                writer << frame;
            }
        }
    }

    cap.release();
    cv::destroyWindow(windowName);

    return EXIT_SUCCESS;
}
