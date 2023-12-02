#include "Base.h"

Base Base::readBase(std::ifstream& in, Base& curBase) {
    currDate = Date::readData(in);
    in >> curBase.height >> curBase.value;
    return curBase;
}

void Base::writeBase() {
    currDate.writeData();
    cout << height << " " << value << endl;
}