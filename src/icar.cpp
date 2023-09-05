// icar.cpp: 定义应用程序的入口点。
//

#include "../include/public.h"
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

struct Params
{
    int example = 0;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Params, example); // 添加构造函数
};

Params params;
Public publicname;

int main()
{
    //VideoCapture cap;
    //cap.open("C:/Users/lsewcx/Desktop/新项目.mp4");
    //while (cap.isOpened())
    //{
    //    Mat frame;
    //    cap.read(frame);
    //    imshow("132",frame);
    //    char key = waitKey(30); // 读取视频修改waitkey里面的参数可以修改图片播放的速度
    //    if (key == 27)
    //    {
    //        break;
    //    }
    //}
    //while (1)
    //{
        //try
        //{
        //    std::ifstream config_is(publicname.get_jsonpath());
        //    if (config_is.is_open())
        //    {
        //        json js_value;
        //        config_is >> js_value;
        //        params = js_value.get<Params>();
        //        cout << params.example;
        //    }
        //    else
        //    {
        //        throw std::runtime_error("json无法打开文件");
        //    }
        //}
        //catch (const std::exception& e)
        //{
        //    std::cerr << "发生异常: " << e.what() << std::endl;
        //    //break;
        //}
    //}
}

