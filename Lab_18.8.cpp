#include <iostream>
#include "List.h"
#include "Print.h"
#include "Dialog.h"
#include "Magazin.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	cout << "m: Создать группу\n+: Добавить элемент в группу\n-: Удалить элемент из группы\ns: Информация об элементах группы\n";
	cout << "z: Информация о названиях всех элементов группы\nq: Конец работы\n";
	Dialog D;
	D.Execute();
}
