#include <iostream>
using namespace std;
int main () {
    const int min = 60;
    const int hour = 3600;
    const int day = 86400;
    cout << "Ingrese el numero de segundos " << endl;
    int seconds;
    cin >> seconds;
    //cout << seconds << endl;
    int days = seconds / day;
    int hours = (seconds % day) / hour;
    int minutes = ((seconds % day) % hour) / min;
    int secs = ((seconds % day) % hour) % min;

    cout << days << " dias " << hours << " horas " << minutes << " minutos " << secs << " segundos" << endl;
}