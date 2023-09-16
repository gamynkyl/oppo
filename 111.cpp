#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct dann {
	double visota;
	int znach, god, mesyac, den;
};

int main() {
	ifstream in("in1.txt");
	vector<dann> vec;
	size_t k = 0;

	while (!in.eof()) {
		dann bb;
		in >> bb.god;
		in.get();
		in >> bb.mesyac;
		in.get();
		in >> bb.den >> bb.visota >> bb.znach;
		k++;
		vec.push_back(bb);
	}
	
	for (int i = 0; i < k; i++) {
		cout << vec[i].god << "." << vec[i].mesyac << "." << vec[i].den << " " << vec[i].visota << " " << vec[i].znach << endl;
	}
}