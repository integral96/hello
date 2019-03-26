#include "lib.h"
#include <iostream>

//#include <spdlog/spdlog.h>
//#include "spdlog/sinks/stdout_sinks.h"

int main()
{
    //auto logger = spdlog::stdout_logger_mt("console");
    //logger->info("version {} was started", version());
    std::cout << "build " << version() <<std::endl;
    std::cout << "Hello, World!" << '\n';
    return 0;
}
