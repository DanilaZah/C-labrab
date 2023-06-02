
#include <iostream>
using namespace std;

struct timetable {
	char subject[30];
	char teacher[30];
	char group[30];
	char dayWeek[10];
	char hours[10];
	char classroom[10];
};
char choosen_one[30];
int n, i, j;
timetable prmtr[4];
char temp[30];


int main()
{
	setlocale(LC_ALL, "Russian");
	try {

		cout << "Сколько расписаний? Макс.5:";
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cout << "\nРасписание " << i + 1 << "\n";
			cout << "Предмет: ";	  cin >> prmtr[i].subject;
			cout << "Преподаватель: ";	  cin >> prmtr[i].teacher;
			cout << "Группа: ";  cin >> prmtr[i].group;
			cout << "День недели: "; cin >> prmtr[i].dayWeek;
			cout << "Часы: "; cin >> prmtr[i].hours;
			cout << "аудитория : "; cin >> prmtr[i].classroom;
		}
		for (i = 0; i < n - 1; i++) {
			for (j = i + 1; j < n; j++) {
				if ((strcmp(prmtr[i].hours, prmtr[j].hours) == 0) && (strcmp(prmtr[i].hours, prmtr[j].hours)==0))
				{
					cout << "Группы у которых совпадают аудитории на занятиях: ";
					cout << prmtr[i].group << ' ' << prmtr[j].group;
				}
			}
				for (i = 0; i < n - 1; i++) {
					for (j = i + 1; j < n; j++) {
						if (strcmp(prmtr[i].group, prmtr[j].group) == 0
							&& (strcmp(prmtr[i].dayWeek, prmtr[j].dayWeek) == 0) && (strcmp(prmtr[i].hours, prmtr[j].hours) == 0))
						{
							cout << prmtr[i].teacher <<"\n";
						}
					}
				}
				cout << "Введите имя преподавателя которого вы ищете: ";
				cin >> choosen_one;
				for (i = 0; i < n - 1; i++) {
					if (strcmp(choosen_one, prmtr[i].teacher) == 0) {
						cout << prmtr[i].group <<' ' << prmtr[i].dayWeek << "\n";
						cout << prmtr[i].hours << ' ' << prmtr[i].dayWeek << "\n";
					}
				}
				for (i = 0; i < n - 1; i++)
				{
					if ((strcmp("информатика", prmtr[i].subject) == 0) && (strcmp("100", prmtr[i].group) == 0))
					{
						cout << prmtr[i].dayWeek << " " << prmtr[i].hours << "\n";
					}
				}
				system("Pause");
			
		}
	}
	 catch (...)
	{
		cout << "Error" << "\n";
	}

}

