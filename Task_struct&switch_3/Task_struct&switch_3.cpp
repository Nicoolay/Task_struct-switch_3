
#include <iostream>
#include <string>

struct adress {
	std::string city{};
	std::string street{};
	int house{};
	int flat{};
	int index{};
};

void print_adress(adress a) {
	std::cout <<"Город: " << a.city << std::endl;
	std::cout <<"Улица: " << a.street << std::endl;
	std::cout <<"Номер дома: " << a.house << std::endl;
	std::cout <<"Номер квартиры: " << a.flat << std::endl;
	std::cout <<"Индекс: " << a.index << std::endl;
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	adress a{ "Новосибирск ","Горская", 1, 29, 163009 };
	adress b{ "London", "Baker steet", 221, 1, 100001 };
	print_adress( a);
	print_adress( b);

}

