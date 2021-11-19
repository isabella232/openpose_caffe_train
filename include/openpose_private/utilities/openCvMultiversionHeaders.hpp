#ifndef OPENPOSE_PRIVATE_UTILITIES_OPENCV_MULTIVERSION_HEADERS_HPP
#define OPENPOSE_PRIVATE_UTILITIES_OPENCV_MULTIVERSION_HEADERS_HPP

#include <opencv2/opencv.hpp>

// Compabitility for OpenCV 4.0 while preserving 2.4.X and 3.X HEADERS
// Note:
// - CV_VERSION:         2.4.9.1 | 4.0.0-beta
// - CV_MAJOR_VERSION:         2 | 4
// - CV_MINOR_VERSION:         4 | 0
// - CV_SUBMINOR_VERSION:      9 | 0
// - CV_VERSION_EPOCH:         2 | Not defined
#if (defined(CV_MAJOR_VERSION) && CV_MAJOR_VERSION > 3)
    #define OPEN_CV_IS_4_OR_HIGHER
#endif
#ifdef OPEN_CV_IS_4_OR_HIGHER
    #define CV_BGR2GRAY cv::COLOR_BGR2GRAY
    #define CV_BGR2RGB cv::COLOR_BGR2RGB
    #define CV_CALIB_CB_ADAPTIVE_THRESH cv::CALIB_CB_ADAPTIVE_THRESH
    #define CV_CALIB_CB_NORMALIZE_IMAGE cv::CALIB_CB_NORMALIZE_IMAGE
    #define CV_CALIB_CB_FILTER_QUADS cv::CALIB_CB_FILTER_QUADS
    #define CV_CAP_PROP_FPS cv::CAP_PROP_FPS
    #define CV_CAP_PROP_FRAME_COUNT cv::CAP_PROP_FRAME_COUNT
    #define CV_CAP_PROP_FRAME_HEIGHT cv::CAP_PROP_FRAME_HEIGHT
    #define CV_CAP_PROP_FRAME_WIDTH cv::CAP_PROP_FRAME_WIDTH
    #define CV_CAP_PROP_POS_FRAMES cv::CAP_PROP_POS_FRAMES
    #define CV_FOURCC cv::VideoWriter::fourcc
    #define CV_GRAY2BGR cv::COLOR_GRAY2BGR
    #define CV_HAAR_SCALE_IMAGE cv::CASCADE_SCALE_IMAGE
    #define CV_INTER_CUBIC cv::INTER_CUBIC
    #define CV_INTER_LINEAR cv::INTER_LINEAR
    #ifndef CV_L2
        #define CV_L2 cv::NORM_L2
        #define CV_RGB2BGR cv::COLOR_RGB2BGR
        #define CV_TERMCRIT_EPS cv::TermCriteria::Type::EPS
        #define CV_TERMCRIT_ITER cv::TermCriteria::Type::MAX_ITER
    #endif
    #define CV_WARP_INVERSE_MAP cv::WARP_INVERSE_MAP
    #define CV_WINDOW_FULLSCREEN cv::WINDOW_FULLSCREEN
    #define CV_WINDOW_KEEPRATIO cv::WINDOW_KEEPRATIO
    #define CV_WINDOW_NORMAL cv::WINDOW_NORMAL
    #define CV_WINDOW_OPENGL cv::WINDOW_OPENGL
    #define CV_WND_PROP_FULLSCREEN cv::WND_PROP_FULLSCREEN
    #include <opencv2/imgcodecs/imgcodecs.hpp>
    #define CV_IMWRITE_JPEG_QUALITY cv::IMWRITE_JPEG_QUALITY
    #define CV_IMWRITE_PNG_COMPRESSION cv::IMWRITE_PNG_COMPRESSION
    #define CV_LOAD_IMAGE_ANYDEPTH cv::IMREAD_ANYDEPTH
    #define CV_LOAD_IMAGE_COLOR cv::IMREAD_COLOR
    #define CV_LOAD_IMAGE_GRAYSCALE cv::IMREAD_GRAYSCALE
    // Training ones
    #ifndef CV_BGR2Lab
        #define CV_BGR2Lab cv::COLOR_BGR2Lab
    #endif
    #ifndef CV_BGR2RGB
        #define CV_BGR2RGB cv::COLOR_BGR2RGB
    #endif
    #ifndef CV_FILLED
        #define CV_FILLED cv::FILLED
    #endif
    #ifndef CV_Lab2BGR
        #define CV_Lab2BGR cv::COLOR_Lab2BGR
    #endif
#endif

#endif // OPENPOSE_PRIVATE_UTILITIES_OPENCV_MULTIVERSION_HEADERS_HPP

