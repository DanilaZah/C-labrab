#include <iostream>
using namespace std;
struct student {
		char f[30];
		char i[30];
		char o[30];
	};

	int n,i,j;
student st[4];
char temp[30];

int main()
{
	setlocale(LC_ALL, "Russian");
	try {
		cout << "Сколько студентов в группе? Макс.4:";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "\nСтудент " << i + 1 << "\n";
			cout << "Фамилия:";	  cin >> st[i].f;
			cout << "Имя:";	  cin >> st[i].i;
			cout << "Отчество:";  cin >> st[i].o;

		}
		for (i = 0; i < n - 1; i++) {
			for (j = i + 1; j < n; j++) {
				if (strcmp(st[i].f, st[j].f) > 0)
				{
					strcpy(temp, st[i].f);
					strcpy(st[i].f, st[j].f);
					strcpy(st[j].f, temp);
					strcpy(temp, st[i].i);
					strcpy(st[i].i, st[j].i);
					strcpy(st[j].i, temp);
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << "\nСтудент " << st[i].f << " " <<st[i].i;
			
		}
		system("Pause");
	}
 
	catch (...)
	{
		cout << "Error" << "\n";
	}
}