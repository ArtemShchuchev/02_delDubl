#include <iostream>
#include <set>
#include <functional>

void printHeader();

int main()
{
	printHeader();

	int count(0);

	// ��������� ���������� �������� ��������������� �� ��������
	std::set<int, std::greater<int>> mySet;
	std::cout << "[IN]:" << std::endl;
	std::cin >> count;
	while (count--)
	{
		int data(0);
		std::cin >> data;
		mySet.insert(data);
	}

	std::cout << "[OUT]:" << std::endl;
	for (const auto& data : mySet)
	{
		std::cout << data << std::endl;
	}

	return 0;
}

// �������
// ��������� 
void printHeader()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");   // ����� ������� �����
	system("chcp 1251");            // ����������� ��������� �������
	std::system("cls");
	cout << "������ 2. �������� ����������\n"
		 << "-----------------------------\n" << endl;
}