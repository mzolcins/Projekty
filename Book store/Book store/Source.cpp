#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

struct Book
{
	int id;
	int count;
	int price;
	char *title;
	Book *next;
};

Book*create(int id, int count, int price, char*title)
{
	Book*i = new Book;
	i->id = id;
	i->count = count;
	i->price = price;
	i->title = title;
	i->next = NULL;
	return i;
}
/*void print_Book(Book* head)
{
	Book *i = head;

}*/

int main()
{
	Book *head=NULL;
	Book *i=NULL;
	Book *next=NULL;
	int id, count, price;
	char *title;
	int choice;
	int k = 0;
	while (k!=1)
	{
		system("CLS");
		cout << "what do u wanna do?:" << endl;
		cout << "1. add item" << endl;
		cout << "2.break" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "Input id:";		cin >> id;
			cout << "Input count:";		cin >> count;
			cout << "Input price:";		cin >> price;
			//cout << "Input title:";		cin >> title;
			title = "Harry";
			if (head == NULL)
			{
				head = create(id, count, price, title);
				next = head;
				cout << "Head=" << head;
				cout << "Next=" << next;
				
			}
			/*else
			{
				next->next = create(id, count, price, title);
			}
			create(id, count, price, title);*/
			//break;
			continue;

		}
		case 2:
		{
			cout << "Okay then" << endl;
			k = 1;
			break;
		}
		default: 
		{
			cout << "Incorrect"; 
			Sleep(1000);
			continue;
		}
		}
	}
	cout <<head->id<<' '<< head->count << ' ' << head->price << ' ' << head->title<<endl;
	_getch();
}