// icar.cpp: 定义应用程序的入口点。
//

#include "../include/public.h"
#include "./opencv/opencv.cpp"

struct Params
{
    int forwardlight = 0;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Params, forwardlight); // 添加构造函数
};

Params params;
Public publicname;
Picture picture;
Capture capture;
std::string model_file_path = "../mobilenet-ssd/";




int main()
{
    //std::string filePath = "/ dev / video0";
    capture.open(0);
    while (1)
    {
        //Mat frame = capture.read();
        //imshow("1231", frame);
        try
        {
            std::ifstream config_is(publicname.get_jsonpath());
            if (config_is.is_open())
            {
                json js_value;
                config_is >> js_value;
                params = js_value.get<Params>();
                cout << params.forwardlight;
            }
            else
            {
                throw std::runtime_error("json无法打开文件");
            }
        }
        catch (const std::exception& e)
        {
            std::cerr << "发生异常: " << e.what() << std::endl;
            //break;
        }
        // char key = waitKey(30); // 读取视频修改waitkey里面的参数可以修改图片播放的速度
        // if (key == 27)
        // {
        //     break;
        // }
    }
}

