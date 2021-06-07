#include <opencv2/opencv.hpp>
#include <cstdlib>
#include <string>
#include <iostream>

static void sliderCallback(int pos, void *userdata)
{
    cv::VideoCapture* p_cap = reinterpret_cast<cv::VideoCapture*>(userdata);

    if (p_cap == nullptr)
    {
        return;
    }

    p_cap->set(cv::CAP_PROP_POS_FRAMES, pos);

    return;
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        return EXIT_FAILURE;
    }

    std::string const filename { argv[1] };
    std::string const windowName { "VideoPlaybackSlider-1" };
    std::string const sliderName { "Frames" };

    cv::namedWindow(windowName, cv::WINDOW_AUTOSIZE);

    cv::VideoCapture cap;
    cap.open(filename);

    auto const frames = cap.get(cv::CAP_PROP_FRAME_COUNT);
    auto const width = cap.get(cv::CAP_PROP_FRAME_WIDTH);
    auto const height = cap.get(cv::CAP_PROP_FRAME_HEIGHT);

    std::cout << "Frames: " << frames << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;

    cv::createTrackbar(sliderName, windowName, nullptr, static_cast<int>(frames), sliderCallback, &cap);

    bool finished = false;

    while (not finished)
    {
        cv::Mat frame;

        cap >> frame;

        finished = frame.empty();

        if (not finished)
        {
            cv::imshow(windowName, frame);

            auto const currentFrame = cap.get(cv::CAP_PROP_POS_FRAMES);
            cv::setTrackbarPos(sliderName, windowName, static_cast<int>(currentFrame));

            finished = (cv::waitKey(33) >= 0);
        }
    }

    cv::destroyWindow(windowName);

    return EXIT_SUCCESS;
}
