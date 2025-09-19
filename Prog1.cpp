#include <iostream>
#include <locale>
using namespace std;
//Задача 1 

bool Proverka(double v) {
    if(v>=0){ 
        return true;
    }
    return false;
        
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double v = 0;
    cout << "Напишите вашу скорость в км/ч: ";
    cin >> v;
    if (Proverka(v)) {
        if (v < 60) {
            cout << "Скорость в пределах нормы " << endl;
        }
        else if (v >= 60 or v <= 80) {
            cout << "Вы приближаетесь к превышению скорости" << endl;
        }
        else {
            cout << "Превышение скорости!" << endl;
        }
    }
    else {
        cout << "Вы ввели неверный формат скорости! " << endl;
    }
   
    return 0;
}

//Задача  2 
/*
bool Proverka(int f) {
    if (f < 0) {
        return false;
    }
    return true;

}
int main()
{
    setlocale(LC_ALL, "Russian");
    int f = 0;
    cout << "Введите количество машин: ";
    cin >> f;
    int res = 1,l=1;
    if (Proverka(f)) {
        while (l <= f) {
            res = res * l;
            l++;
        }
        cout << "Производительность машин на фабрике: "<<res;
    }
    else {
        cout << "Кол-во машин не может быть отрицательным числом! Введите правильно значение.";
    }

    return 0;
}*/