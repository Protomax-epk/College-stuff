#include <iostream>
#include <cstdlib>


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
int first(){

}
int main() {
    system("chcp 65001");
    int n=10, k=1;
    while (k<=n){
        std::cout<<k<<std::endl;
        k++;
    }
    return 0;
}