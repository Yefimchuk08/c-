#include <iostream>
using namespace std;

struct Node {
	int value;
	Node* next;
	Node* prev;

	Node(int value, Node* next, Node* prev) : value{ value }, next{ next }, prev{ prev } {}
};
class List {
	Node* head;
	Node* tail;
	int size;
public:
	List()
	{
		head = nullptr;
		tail = nullptr;
	}
	List(const initializer_list<int>list)
	{
		head = nullptr;
		for (int i = 0; i < list.size(); i++)
		{
			this->AddToHead(i);
		}
	}
	bool isEmpty()const {
		return head == nullptr;
	}
	void AddToHead(int elem)
	{
		Node* newNode = new Node(elem, head, nullptr);
		if (isEmpty())
		{
			head = tail = newNode;
		}
		head->prev = newNode;
		head = newNode;
	}

	int MaxElem()
	{
		Node* current = head;
		int maxValue = head->value;
		while (current != nullptr)
		{
			if (maxValue < current->value)
				maxValue = current->value;
			current = current->next;
		}
		return maxValue;
	}

	int MinElem()
	{
		Node* current = head;
		int minValue = head->value;
		while (current != nullptr)
		{
			if (minValue > current->value)
				minValue = current->value;
			current = current->next;
		}
		return minValue;
	}

	void AddToTail(int elem)
	{
		Node* newNode = new Node(elem, nullptr, tail);
		if (isEmpty())
		{
			AddToHead(elem);
		}
		tail->next = newNode;
		tail = newNode;
	}

	void Show()
	{
		for (auto i = head; i != nullptr; i = i->next)
		{
			cout << i->value << " ";
		}
		cout << "\n ******************************************** \n";
	}
	void Clear()
	{
		while (head != nullptr)
		{
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
	~List()
	{
		Clear();
	}
	void operator [](int index)
	{
		int elem;
		cout << "Enter elem: ";
		cin >> elem;
		Node* current = head;
		int i = 0;
		while (current != nullptr)
		{
			if (index == i)
				current->value = elem;
			current = current->next;
			++i;
		}
	}
	void DelByValue(int value) {
		Node* current = head;
		while (current != nullptr) {
			if (current->value == value) {
				if (current == head) {
					head = head->next;
					if (head) head->prev = nullptr;
				}
				else if (current == tail) {
					tail = tail->prev;
					if (tail) tail->next = nullptr;
				}
				else {
					current->prev->next = current->next;
					current->next->prev = current->prev;
				}
				delete current;
				return;
			}
			current = current->next;
		}
	}

	void DeleteDuplicates() {
		Node* current = head;
		while (current != nullptr) {
			Node* runner = current->next;
			while (runner != nullptr) {
				if (runner->value == current->value) {
					Node* toDelete = runner;
					runner = runner->next;
					if (toDelete == tail) {
						tail = toDelete->prev;
						tail->next = nullptr;
					}
					else {
						toDelete->prev->next = toDelete->next;
						if (toDelete->next) {
							toDelete->next->prev = toDelete->prev;
						}
					}
					delete toDelete;
					--size;
				}
				else {
					runner = runner->next;
				}
			}
			current = current->next;
		}
	}
	void Show() const {
		for (Node* current = head; current != nullptr; current = current->next) {
			cout << current->value << " ";
		}
		cout << endl;
	}

	void ShowReverse() const {
		for (Node* current = tail; current != nullptr; current = current->prev) {
			cout << current->value << " ";
		}
		cout << endl;
	}

	void Clear() {
		while (head != nullptr) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
		tail = nullptr;
		size = 0;
	}

};


int main()
{
	List list;
	list.AddToHead(1);
	list.AddToHead(2);
	list.AddToHead(1);
	list.AddToHead(1);
	list.AddToHead(5);
	list.AddToHead(1);
	list.AddToHead(2);
	list.Show();
	cout << list.MaxElem() << endl;
	cout << list.MinElem() << endl;
}