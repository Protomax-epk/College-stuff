#include <iostream>
using namespace std;
//Программа, которая выводит натуральные числа от 1 до 10
int First() {

    int n=10, k=1;
    string desc("Программа, которая выводит натуральные числа от 1 до 10");
    cout<<desc<<endl;
    while (k<=n){
        cout<<k<<endl;
        k++;
    }
    return 0;
}


//Программа для отображения в консоле чисел, которые при делении на 4 в остатке дают три, количество чисел вводится с клавиатуры
int Second() {
    int n, i=0;
    string desc("Программа для отображения в консоле чисел, которые при делении на 4 в остатке дают три, количество чисел вводится с клавиатуры");
    cout << desc << endl;
    cout << "Введите количество чисел для отображения." << endl;
    cin >> n;
    cout << "Результат:" << endl;
    while(i <= n){
        cout << 3 + 4 * i << endl;
        i++;
    }
    return 0;
}


//Отображение чисел фибоначи, количество вводится с клавиатуры
int Third() {
    int n, i=0;
    string desc("Отображение чисел фибоначи, количество вводится с клавиатуры");
    cout << desc << endl;
    cout << "Введите количество чисел для отображения." << endl;
    cin >> n;
    cout << "Результат:" << endl;
    while(i <= n){
        cout <<3+4*i<<endl;
        i++;
    }
    return 0;
}


//Программа для отображения биноминальных коэфицентов без предварительной записи в массив
int Fourth() {
    system("chcp 65001");
    string desc("Программа для отображения биноминальных коэфицентов без предварительной записи в массив");
    cout<<desc<<endl;
    return 0;
}


//Перевод расстояния из км и м в футы и мили
int Fifth() {
    system("chcp 65001");
    string desc("Перевод расстояния из км и м в футы и мили");
    cout<<desc<<endl;
    return 0;
}


//Сажени и аршины в метры и см
int Sixth() {
    system("chcp 65001");
    string desc("Сажени и аршины в метры и см");
    cout<<desc<<endl;
    return 0;
}


//Программа с функцией для перевода из км\ч в м\с
int Seventh() {
    system("chcp 65001");
    string desc("Программа с функцией для перевода из км\\ч в м\\с");
    cout<<desc<<endl;
    return 0;
}


//Программа в которой массив заполняется данными, элементы с четными индексами получают значение индексы, а элементы с нечетными - квадрат индекса, поэлементно
int Eighth() {
    system("chcp 65001");
    string desc("Программа в которой массив заполняется данными, элементы с четными индексами получают значение индексы, а элементы с нечетными - квадрат индекса, поэлементно");
    cout<<desc<<endl;
    return 0;
}