#pragma once

#include <string>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <opencv2/imgproc.hpp>

#include "Program.hpp"

namespace gl {
    class Texture;
    GLFWwindow * createDefaultWindow(const std::string &windowName, uint64_t width, uint64_t height);
    void loadCVmat2GLTexture(const Texture &texture, const cv::Mat &image, bool shouldFlip = false);
    Program loadDefaultShaders();
    GLuint retrieveTypeSize(GLenum type);
}