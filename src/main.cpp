#include <iostream>
#include "spiderUtils.h"

using namespace std;
int main(int argc, const char** argv) {
    string datares;
    spiderUtils::HttpGet("http://www.baidu.com",datares,10);
    cout<<datares<<endl;
    return 0;
}