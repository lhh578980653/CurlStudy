#include "curl.h"
#include "zlib.h"
#include <iostream>
#include <unistd.h>
#include <memory>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
class spiderUtils
{
private:
    /* data */
public:
    spiderUtils(/* args */);
    ~spiderUtils();
public:
    static size_t receive_data(void *contents, size_t size, size_t nmemb, void *stream);
    // HTTP 下载文件的回调函数
    static size_t writedata2file(void *ptr, size_t size, size_t nmemb, FILE *stream);
    // 文件下载接口
    static int download_file(const char* url, const char outfilename[FILENAME_MAX]);
    // http get 请求
    static CURLcode HttpGet(const std::string & strUrl, std::string & strResponse,int nTimeout);
};

