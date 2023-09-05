// pubic.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include <fstream>
#include"json.hpp"
#include <exception>
using json = nlohmann::json;
class Public
{
private:
	std::string jsonPath = "motion.json";
public:
	std::string get_jsonpath() { return jsonPath; };
};
// TODO: 在此处引用程序需要的其他标头。
