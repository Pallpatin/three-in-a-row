
#include "params.h"
//#define showASKI

int main()
{
    srand(time(NULL));

#ifdef showASKI
    for (int i = 0; i < 256; i++) {
        cout << "\n i = " << i <<"  " << char(i);
    }
#endif // showASKI

#ifndef showASKI
    Map NovayaKarta;
    NovayaKarta.GetXY(WIDGH, HIGH);
    NovayaKarta.startinit();
    NovayaKarta.fullPole();
    NovayaKarta.name = "Test Map";

    char act;

    while (1) {

        NovayaKarta.showpole();
        
        act = _getch();
        system("cls");
        NovayaKarta.action(act);
    }


#endif // showASKI
}
