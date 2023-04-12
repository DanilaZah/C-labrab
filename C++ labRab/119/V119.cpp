//1.19 Составьте программу для нахождения всех номеров счастливых билетов, у которых сумма первых (или последних) трех цифр, будучи возведенной в какую-либо степень,
//равна номеру счастливого билета.

#include <iostream>
#include <cmath>
#include <list>
#include <iterator>
using namespace std;


int main()
{
    setlocale(0, "");
    int i, j, k;
    int ticket[6];
    int temp_happyticket;
    list <int> happyticket;

    for (i = 0; i <= 999999; i++) {
        for (k = i, j = 0; j < 6; j++, k /= 10) {
            ticket[j] = k % 10;

        }

        if (pow(ticket[0] + ticket[1] + ticket[2], j) == i) {
            happyticket.insert(happyticket.end(),i);
            cout << i;

        }
        copy(happyticket.begin(), happyticket.end(), ostream_iterator<int>(cout, " "));
        
    }
}