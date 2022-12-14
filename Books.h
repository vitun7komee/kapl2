#include <iostream>
#include <string>
#include <fstream>

struct Book
{
private:
	std::string autor;
	std::string name;
	int year;
	int pages;
	std::string speciality;
public:
	Book() {};
	Book(std::ifstream& file);
	void print();
	std::string getname();
	int getyear();
	int compare(const Book& obj);
};