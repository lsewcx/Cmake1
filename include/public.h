// pubic.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <fstream>
#include"json.hpp"
#include <exception>
#include <opencv2/opencv.hpp>
#include<filesystem>
#include<thread>
#include <chrono>
#include <mutex>
#include <opencv2/core/ocl.hpp>
using namespace std;
using json = nlohmann::json;
using namespace cv;
namespace fs = std::filesystem;

class Public
{
private:
	std::string jsonPath = "F:/Cmake/icar/config/motion.json";
public:
	std::string get_jsonpath() { return jsonPath; };
};
// TODO: 在此处引用程序需要的其他标头。
