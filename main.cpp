#include <iostream>
#include <cstdlib>
#include "Tasks/Tasks.cpp"
using namespace std;
int main(){
    system("chcp 65001");
    int nTask;
    cout<<"Введите номер задачи."<<endl;
    cin>>nTask;
    switch (nTask) {
        case 1:
            First();
            break;
        case 2:
            Second();
            break;
        case 3:
            Third();
            break;
        case 4:
            Fourth();
            break;
        case 5:
            Fifth();
            break;
        case 6:
            Sixth();
            break;
        case 7:
            Seventh();
            break;
        case 8:
            Eighth();
            break;
    }

    return  0;
}

int primer(){
    system("chcp 65001");
    const int ftInMile=5280;
    const double kmInMile=1.609344;
    int dMile,dFt,dKm,dM;
    std::cout<<"Расстояние в милях и футах."<<std::endl;
    std::cout<<"Мили:";
    std::cin>>dMile;
    std::cout<<"Футы:";
    std::cin>>dFt;
    double distMile=dMile+(double)dFt/ftInMile;
    double distKm=distMile*kmInMile;
    dKm=(int)distKm;
    dM=(int)((distKm-dKm)*1000);
    std::cout<<"Расстояние в километрах и метрах."<<std::endl;
    std::cout<<"Километры:"<<dKm<<std::endl;
    std::cout<<"Метры:"<<dM<<std::endl;
    system("pause>nul");
    return 0;
}
