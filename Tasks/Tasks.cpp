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
    int n, i;

    string desc("Отображение чисел фибоначи, количество вводится с клавиатуры");
    cout << desc << endl;
    cout << "Введите количество чисел для отображения." << endl;
    cin >> n;
    cout << "Результат:" << endl;
    int f[n+2];
    f[0] = 0;
    f[1] = 1;
    for(i = 2; i<=n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for(i=0; i<n; i++){
        cout<<f[i]<<endl;
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
    string desc("Перевод расстояния из км и м в футы и мили");
    cout<<desc<<endl;
    const int ftInMile=5280;
    const int mInKm=1000;
    const double kmInMile=1.609344;
    int dMile,dFt,dKm,dM;
    cout<<"Расстояние в километрах и метрах."<<std::endl;
    cout<<"Км:";
    cin>>dKm;
    cout<<"М:";
    cin>>dM;
    double distKm = dKm + (double)dM/mInKm;
    double distMile = distKm/kmInMile;
    dMile=(int)distMile;
    dFt=(int)((distMile-dMile)*ftInMile);
    cout<<"Расстояние в Милях и Футах."<<endl;
    cout<<"Мили:"<<dMile<<endl;
    cout<<"Футы:"<<dFt<<endl;
    system("pause>nul");
    return 0;
}


//Сажени и аршины в метры и см
int Sixth() {
    string desc("Сажени и аршины в метры и см");
    cout<<desc<<endl;
    const double MInSz=1.609344;
    int dSz,dAr,dCm,dM;
    cout<<"Расстояние в Саженях и Аршинах."<<endl;
    cout<<"Сажени:";
    cin >> dSz;
    cout<<"Аршины:";
    cin >> dAr;
    double distSazen= dSz + (double)dAr / 3;
    double distM= distSazen * MInSz;
    dM=(int)distM;
    dCm=(int)((distM-dM)*100);
    cout<<"Расстояние в метрах и сантиметрах."<<endl;
    cout<<"Километры:"<<dM<<endl;
    cout<<"Метры:"<<dCm<<endl;
    system("pause>nul");
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
