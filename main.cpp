#include <vector>
#include "Base.h"

vector<Base> loadBase(std::ifstream& in, vector<Base> objects) {
    while (!in.eof()) {
        Base curBase;
        curBase.readBase(in, curBase);
        objects.push_back(curBase);
    }
    return objects;
}

void printBase(vector<Base> objects) {
    size_t size = objects.size();
    for (size_t i = 0; i < size; i++) {
        objects[i].writeBase();
    }
}

int main() {
    ifstream in("in1.txt");
    vector<Base> objects;
    objects = loadBase(in, objects);
    printBase(objects);
    return 0;
}