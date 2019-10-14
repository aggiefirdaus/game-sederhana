#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string kata;
    int huruf;
    srand(static_cast<unsigned int>(time(0)));

    cout << "tulis kata apapun: ";
    cin >> kata;
    huruf = kata.size();
    cout << "\nJumlah huruf " << kata << " adalah : " << huruf << endl;
    string acak = kata;

    for (int i = 0; i < huruf; ++i) {
        int huruf1 = (rand() % huruf);
        int huruf2 = (rand() % huruf);
        char temp = acak[huruf1];
        acak[huruf1] = acak[huruf2];
        acak[huruf2] = temp;
    }

    cout << "Hasil acak kata : " << acak << endl;


    return 0;
}
