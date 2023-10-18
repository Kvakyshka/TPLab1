#include "Transport.h"

int main()
{
	Transport ob1;
	char c,c1;
	int flag = 1;
	string k;
	const char* oper[] =
	{
	 "Menu:",
	 " 1 - Read",
	 " 2 - Add",
	 " 3 - Delete",
	 " 4 - Show array",
	 " 5 - Show object",
	 " 6 - Edit",
	 " 7 - Save",
	 " 8 - Exit",
	};

	while (flag != 0)
	{
		for (int i = 0; i < 9; i++)
		{
			cout << oper[i] << endl;
		}
		cout << "Enter option number";
		c = _getch();
		if (c == '1')
		{
			system("cls");
			ob1.Read();
			system("pause");
			system("cls");
			
		}
		if (c == '2')
		{
			system("cls");
			cout << "1 - Airplane\n2 - Train\n3 - Auto\nSelect the element type to create: ";
			getline(cin, k);
			system("cls");
			ob1+stoi(k);
			cout << "0-Menu: ";
			c1 = _getch();
			if (c1 == '0')
			{
				system("cls");
			}
		}
		if (c == '3')
		{
			system("cls");
			ob1.Show_list();
			cout << "Select item number to delete: ";
			getline(cin, k);
			ob1.Delete(stoi(k));
			cout << "0-Menu: ";
			c1 = _getch();
			if (c1 == '0')
			{
				system("cls");
			}
		}
		if (c == '4')
		{
			system("cls");
			ob1.Show_list();
			cout << "0-Menu: ";
			c1 = _getch();
			if (c1 == '0')
			{
				system("cls");
			}
		}
		if (c == '5')
		{
			system("cls");
			ob1.Show_object();
			cout << "0-Menu: ";
			c1 = _getch();
			if (c1 == '0')
			{
				system("cls");
			}
		}
		if (c == '6')
		{
			system("cls");
			ob1.Edit_all();
			cout << "0-Menu: ";
			c1 = _getch();
			if (c1 == '0')
			{
				system("cls");
			}
		}
		if (c == '7')
		{
			ob1.Save();
			system("cls");
		}
		if (c == '8')
		{
			system("cls");
			flag = 0;
			break;
		}
	}
	
	return 0;
}
