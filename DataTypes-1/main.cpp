#include <opencv2/opencv.hpp>
#include <cstdlib>

int main(int argc, char* argv[])
{
    {
        cv::Vec2b v1;
        cv::Vec2w v2;
        cv::Vec2s v3;
        cv::Vec2i v4;
        cv::Vec2f v5;
        cv::Vec2d v6;
    }
    {
        cv::Vec3b v1;
        cv::Vec3w v2;
        cv::Vec3s v3;
        cv::Vec3i v4;
        cv::Vec3f v5;
        cv::Vec3d v6;
    }
    {
        cv::Vec4b v1;
        cv::Vec4w v2;
        cv::Vec4s v3;
        cv::Vec4i v4;
        cv::Vec4f v5;
        cv::Vec4d v6;
    }
    {
        cv::Vec6i v1;
        cv::Vec6f v2;
        cv::Vec6d v3;
    }
    return EXIT_SUCCESS;
}
