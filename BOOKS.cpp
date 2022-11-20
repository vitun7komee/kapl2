#include "Books.h"

Book::Book(std::ifstream& file)
{
	file >> autor;
	file >> name;
	file >> year;
	file >> pages;
	file >> speciality;
	file.ignore();
	std::string splitLine;
	std::getline(file, splitLine);
}

void Book::print()
{
	std::cout << autor << '\n';
	std::cout << name << '\n';
	std::cout << year << '\n';
	std::cout << pages << '\n';
	std::cout << speciality << '\n';
	std::cout << "~~~~~~~~~~~~~\n";
}

int Book::compare(const Book& b)
{
	int result = 1;
	if ((name < b.name) || (name == b.name && year<b.year)||(name == b.name && year == b.year && pages<b.pages))
		result = -1;
	if ((name == b.name) && (year == b.year) && (pages == b.pages))
			result = 0;
	return result;
}

std::string Book::getname()
{
	return name;
}

int Book::getyear()
{
	return year;
}