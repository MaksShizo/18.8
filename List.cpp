#include "List.h"

List::List()
{
	beg = 0;
	cur = 0;
	size = 0;
}
List::~List(void)
{
	if (beg != 0)delete[] beg;
	beg = 0;
}
List::List(int n)
{
	beg = new Object * [n];
	cur = 0;
	size = n;
}
void List::Add()
{
	Object* p;
	cout << "1. Печатное издание" << endl;
	cout << "2. Журнал" << endl;
	int x;
	cin >> x;
	if (x == 1)
	{
		Print* a = new (Print);
		a->Input();
		p = a;
		if (cur < size)
		{
			beg[cur] = p;
			cur++;
		}
	}
	else
		if (x == 2)
		{
			Magazin* b = new Magazin;
			b->Input();
			p = b;
			if (cur < size)
			{
				beg[cur] = p;
				cur++;
			}
		}
		else return;
}
void List::Add(Object* o)
{
	Object* p = o;
	beg[cur] = p;
	cur++;
	return;
}
void List::Show()
{
	if (cur == 0) cout << "Пусто" << endl;
	Object** p = beg;
	for (int i = 0; i < cur; i++)
	{
		(*p)->Show();
		p++;
	}
}
int List::operator()()
{
	return cur;
}
void List::HandleEvent(const TEvent& e)
{
	if (e.what == evMessage)
	{
		Object** p = beg;
		for (int i = 0; i < cur; i++)
		{
			(*p)->HandEvent(e);
			p++;
		}
	}
}
void List::Del()
{
	if (cur == 0) return;
	cur--;
}


		