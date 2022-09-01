#include <iostream>


using namespace std;

class Kedi {
public:
	int value{};

	Kedi() {
		cout << "Created kedi class" << endl;

	}
	~Kedi() {
		cout << "Deleted kedi class" << endl;

	}
};

int main() {
	shared_ptr<Kedi> kedi_ptr = make_shared<Kedi>();
	shared_ptr<Kedi> ptr = kedi_ptr;
	getchar();
	cout << "value " << ptr->value << endl;
	cout << "memory address " << ptr.get() << endl; // nesnenin gercek bellek adresi
	cout << "shared memory pointer numberof element " << ptr.use_count() << endl; // kac isaretci

}