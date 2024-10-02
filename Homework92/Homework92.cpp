#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    //float pr;
    //float zp;
    //cout << "Введите сумму продаж: ";
    //cin >> pr;
    //zp = 100 + (pr * 0.05);
    //cout << "Зарплата: " << zp;

    long long speed;
    float size;
    cout << "Введите скорость интернета в битах: ";
    cin >> speed;
    cout << "Введите разммер файла в гигабайтах: ";
    cin >> size; \
    long long bit = size * 1024 * 1024 * 1024 * 8;
    int sec = bit / speed;
    int h = sec / 60 / 60;
    int m = sec / 60 % 60;
    int s = sec % 3600 % 60;

    cout << "Время скачки\n Часов: " << h << "\n Минут: " << m << "\n Секунд: " << s;
}
