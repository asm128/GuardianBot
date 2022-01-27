#include "CVCameraAdapter.hpp"

namespace vidIO {
    CVCameraAdapter::CVCameraAdapter() { this->open(); }
    bool CVCameraAdapter::open() {
        return cap.open(0);
    }

    void CVCameraAdapter::close() { if (cap.isOpened()) cap.release(); }
    Frame CVCameraAdapter::nextFrame() {
        cv::Mat frame;
        if (!cap.read(frame))
            throw std::runtime_error("Device could not read frame.");

        return frame;
    }

    CVCameraAdapter::~CVCameraAdapter() { this->close(); }
}