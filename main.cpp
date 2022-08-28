#include <iostream>


int main() {
	
	std::cout << "hello world\n";
	char a = 120;
	char* ptr = &a;
	auto b = 5;
	bool flag = false;
	
	uint16_t buf{ 4 };
	int d(4);

	wchar_t abc = 'b';
	const double pi = 3.14;

	//int paranter{ 1.2 }; // parantez derleme zamanında hatayi verir
	int cast_val = 10;
	cast_val = static_cast<int>(5.8);

	std::cout << abc;

	std::cout<< "buf = "<< buf << "\n";
	std::cout << "d = "<< d << "\n";
	std::cout << flag << "\n";
	std::cout << sizeof(b)<<"\n";
	std::cout << b << "\n";
	std::cout << *ptr;

	return 0;
}