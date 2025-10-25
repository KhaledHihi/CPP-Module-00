#include <iostream>
#include <ctime>

int main() {
    std::time_t time = std::time(NULL); // retuen sec since 1970
    std::tm *tm = std::localtime(&time); // take time sec and convert it to struct

    std::cout << '[' << 1900 + tm->tm_year; // year since 1900
    int t1 = 1 + tm->tm_mon; //add 1 cuz tm_mo start from 0-11;
    if (t1 > 9)
        std::cout << t1;
    else
        std::cout << '0' << t1;
    if (tm->tm_mday > 9)
        std::cout << tm->tm_mday << '_';
    else
        std::cout << '0' << tm->tm_mday << '_';
    if (tm->tm_hour > 9)
        std::cout << tm->tm_hour;
    else
        std::cout << '0' << tm->tm_hour;
    if (tm->tm_min > 9)
        std::cout << tm->tm_min;
    else
        std::cout << '0' << tm->tm_min;
    if (tm->tm_sec > 9)
        std::cout << tm->tm_sec << ']';
    else
        std::cout << '0' << tm->tm_sec << ']';
    
}