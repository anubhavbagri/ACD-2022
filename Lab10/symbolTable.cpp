// C++ program to implement Symbol Table
#include <iostream>
using namespace std;

const int MAX = 100;

class Symbol
{

	string name, scope, type;
	int size;
	Symbol *next;

public:
	Symbol()
	{
		next = NULL;
	}

	Symbol(string name, string scope, string type, int size)
	{
		this->name = name;
		this->type = type;
		this->scope = scope;
		this->size = size;
		next = NULL;
	}

	void print()
	{
		cout << "Name: " << name
				 << "\tType: " << type
				 << "\tScope: " << scope
				 << "\tSize: " << size << endl;
	}
	friend class SymbolTable;
};

class SymbolTable
{
	Symbol *head[MAX];

public:
	SymbolTable()
	{
		for (int i = 0; i < MAX; i++)
			head[i] = NULL;
	}

	int hash_function(string name); // hash function
	bool insert(string name, string scope,
							string type, int size);

	string find(string name);
};

// Function to find an name
string SymbolTable::find(string name)
{
	int index = hash_function(name);
	Symbol *start = head[index];

	if (start == NULL)
		return "-1";

	while (start != NULL)
	{

		if (start->name == name)
		{
			start->print();
			return start->scope;
		}

		start = start->next;
	}

	return "-1"; // not found
}

// Function to insert an name
bool SymbolTable::insert(string name, string scope, string type, int size)
{
	int index = hash_function(name);
	Symbol *p = new Symbol(name, scope, type, size);

	if (head[index] == NULL)
	{
		head[index] = p;
		cout << "\n"
				 << name << " inserted";

		return true;
	}

	else
	{
		Symbol *start = head[index];
		while (start->next != NULL)
			start = start->next;

		start->next = p;
		cout << "\n"
				 << name << " inserted";

		return true;
	}

	return false;
}

int SymbolTable::hash_function(string name)
{
	int asciiSum = 0;

	for (int i = 0; i < name.length(); i++)
	{
		asciiSum = asciiSum + name[i];
	}

	return (asciiSum % 100);
}

// Driver code
int main()
{
	SymbolTable st;
	string check;

	/**
	 * C program snippet
	 *
	 * int count = 20
	 * string test = "hello world"
	 */

	cout << "C program snippet: " << endl;
	cout << "int count = 20; \nstring test = \"hello world\";" << endl;

	cout << "\n**** Inserting into Symbol Table ****";
	if (st.insert("count", "local", "int", sizeof(int)))
		cout
				<< " - added successfully";
	else
		cout << "\nFailed to insert.\n";

	if (st.insert("test", "local", "string", sizeof("hello world")))
		cout << " - added successfully\n";
	else
		cout << "\nFailed to insert\n";

	cout << "\n**** SYMBOL TABLE ****\n";
	check = st.find("count");
	if (check == "-1")
		cout << "\ncount not Present\n";

	check = st.find("test");
	if (check == "-1")
		cout << "\ntest not Present";

	return 0;
}
