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
    {
        cv::Matx12f v1;
        cv::Matx12d v2;
        cv::Matx13f v3;
        cv::Matx13d v4;
        cv::Matx14f v5;
        cv::Matx14d v6;
        cv::Matx16f v7;
        cv::Matx16d v8;
    }
    {
        cv::Matx21f v1;
        cv::Matx21d v2;
        cv::Matx22f v3;
        cv::Matx22d v4;
        cv::Matx23f v5;
        cv::Matx23d v6;
    }
    {
        cv::Matx31f v1;
        cv::Matx31d v2;
        cv::Matx32f v3;
        cv::Matx32d v4;
        cv::Matx33f v5;
        cv::Matx33d v6;
        cv::Matx34f v7;
        cv::Matx34d v8;
    }
    {
        cv::Matx41f v1;
        cv::Matx41d v2;
        cv::Matx43f v3;
        cv::Matx43d v4;
        cv::Matx44f v5;
        cv::Matx44d v6;
    }
    {
        cv::Matx61f v1;
        cv::Matx61d v2;
        cv::Matx66f v3;
        cv::Matx66d v4;
    }

    return EXIT_SUCCESS;
}
