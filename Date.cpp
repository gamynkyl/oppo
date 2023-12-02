#include "Date.h"

Date Date::readData(std::ifstream& in) {
    Date currdate;
    in >> currdate.year;
    in.get();
    in >> currdate.month;
    in.get();
    in >> currdate.day;
    return currdate;
}

void Date::writeData() {
    std::cout << year << "." << month << "." << day << " ";
}