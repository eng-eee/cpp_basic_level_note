#include <iostream>
#include <iterator>
#include <string>

using namespace std;


class AppConstructor {
public:
	string msg;
	int counter;

	AppConstructor() {
		counter = 5;
		msg = "Demo message";
		cout << "AppConstructor called by programmer" << endl;
	}
	
	AppConstructor(string message, int cnt) {
		msg = message;
		counter = cnt;
		cout << "AppConstructor called by programmer1" << endl;
	}
	
	AppConstructor(string message) {
		msg = message;
		cout << "AppConstructor called by programmer2" << endl;
	}

	~AppConstructor() {
		cout << "AppConstructor destroyed by programmer3" << endl;
	}

	void disp_msg() {
		for (size_t i = 0; i < counter; i++)
		{
			cout << msg << endl;
		}

	}

};

int main() {
	
	AppConstructor demo;
	
	//AppConstructor demo("merhaba",4);
	//AppConstructor demo("selam");
	demo.disp_msg();

	return 0;
}