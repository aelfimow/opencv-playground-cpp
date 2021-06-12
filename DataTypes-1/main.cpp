#include <opencv2/opencv.hpp>
#include <cstdlib>

static void Vectors()
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
}

static void Matrix()
{
    {
        cv::Matx12f m1;
        cv::Matx12d m2;
        cv::Matx13f m3;
        cv::Matx13d m4;
        cv::Matx14f m5;
        cv::Matx14d m6;
        cv::Matx16f m7;
        cv::Matx16d m8;
    }
    {
        cv::Matx21f m1;
        cv::Matx21d m2;
        cv::Matx22f m3;
        cv::Matx22d m4;
        cv::Matx23f m5;
        cv::Matx23d m6;
    }
    {
        cv::Matx31f m1;
        cv::Matx31d m2;
        cv::Matx32f m3;
        cv::Matx32d m4;
        cv::Matx33f m5;
        cv::Matx33d m6;
        cv::Matx34f m7;
        cv::Matx34d m8;
    }
    {
        cv::Matx41f m1;
        cv::Matx41d m2;
        cv::Matx43f m3;
        cv::Matx43d m4;
        cv::Matx44f m5;
        cv::Matx44d m6;
    }
    {
        cv::Matx61f m1;
        cv::Matx61d m2;
        cv::Matx66f m3;
        cv::Matx66d m4;
    }
}

static void Points()
{
    {
        cv::Point p;
    }
    {
        cv::Point2i p1;
        cv::Point2l p2;
        cv::Point2f p3;
        cv::Point2d p4;
    }
}

int main(int argc, char* argv[])
{
    Vectors();
    Matrix();
    Points();

    return EXIT_SUCCESS;
}
