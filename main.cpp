#include <iostream>

using namespace std;

int main()
{
    int a, b, meia_area = 160 * 35, area_cortada;
    cin >> a;
    cin >> b;
    area_cortada = ((a + b) * 70) / 2;
    if (meia_area < area_cortada){
        cout << "1" <<endl;
    }else{
    if (meia_area > area_cortada){
        cout << "2" <<endl;
    }else{
    cout << "0" <<endl;
    }
    }
    return 0;
}
