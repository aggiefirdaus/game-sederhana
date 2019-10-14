#include <iostream>
#include <string>

int main()
{
    char lagi = 'y';
    float stat = 0;
    float prevStat = 0;
    float statTerhebat = 0;
    float statTerlemah = 0;
    bool first = true;

    std::string namaItem = "";
    std::string prevItem = "";
    std::string itemTerhebat = "";
    std::string itemTerlemah = "";

    while(lagi=='y') {
        std::cout << "Masukkan item: ";
        std::cin >> namaItem;
        std::cout << "Masukkan stat : ";
        std::cin >> stat;
        std::cout << "Item Anda adalah : " << namaItem;
        std::cout << "\nStat : " << stat;
        if (first == true) {
            prevItem = "Nothing";
            itemTerhebat = namaItem;
            itemTerlemah = namaItem;
            statTerhebat = stat;
            statTerlemah = stat;
        } else {
            if(stat >= statTerhebat) {
                statTerhebat = stat;
                itemTerhebat = namaItem;
            }else{
                if(stat <= statTerlemah) {
                    statTerlemah = stat;
                    itemTerlemah = namaItem;
                }

            }
        }

        std::cout << "\nItem sebelumnya : " << prevItem;
        std::cout << "\nItem terhebat : " << itemTerhebat;
        std::cout << "\nItem terlemah : " << itemTerlemah;

        prevItem = namaItem;
        prevStat = stat;
        first = false;
        std::cout << "\nInput item lagi ? (y/n)" << std::endl;
        std::cin >> lagi;
    }
    char ch; std::cin >> ch;
    return 0;
}
