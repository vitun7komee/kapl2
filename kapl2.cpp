#include "My_List.h"
#include <Windows.h>

void task(DLIST& DL)
{
	ptrNODE ptr = DL.get_begin();
	std::string searchname;
	int targetyear;
	std::cout << "Enter name of the book: \n";
	std::cin >> searchname;
	std::cout << "Enter the year of publishing: \n";
	std::cin >> targetyear;

	bool find;
	while (ptr)
	{
		find = false;
		std::string f = ptr->info.getname();
		size_t pos = f.find(searchname);
		if (pos != std::string::npos) {
			find = true;
		}
		if (ptr->info.getyear() < targetyear || !find) {
				DL.Delete(ptr);
			
		}
		else {
			ptr = ptr->next;
		}
	}
}

int main()
{
	setlocale(0, "");
	std::ifstream file("xd.txt");
	if (file)
	{
		DLIST DL("xd.txt");
		DL.print();
	    task(DL);
		std::cout << "Search results : \n\n";
		DL.print();
	}
	else { std::cout << "Input file not found" << std::endl; }
	std::cin.get();
}