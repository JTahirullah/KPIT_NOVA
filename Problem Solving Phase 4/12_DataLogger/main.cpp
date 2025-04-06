#include "data_logger.h"
#include <string>

int main() {
    DataLogger logger;

    logger.logData(42);                        // Integer
    logger.logData(3.14159f);                  // Float
    logger.logData("Engine Overheat");         // C-style string
    logger.logData(std::string("ABS Error"));  // std::string

    return 0;
}
