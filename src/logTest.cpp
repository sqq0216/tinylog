//
// Created by chenkuan on 2018/2/26.
//

#include <Logger.h>

int main() {
    Logger *logger = Logger::getLogger();
    logger->debug("测试程序开始");
    return 0;
}