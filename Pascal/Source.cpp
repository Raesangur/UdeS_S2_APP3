#include <ostream>
#include <fstream>
#include <iostream>
#include <string>

class myclass
{
private:
    int tab[10];
    std::string str = "Bon matin";

public:
    int* getTab()
    {
        return tab;
    }

    friend std::ostream& operator<<(std::ostream& lhs, const myclass& rhs);
};


int main()
{
    std::ofstream monFichier {"C:\Windows\Bluescreen.txt"};
    myclass object;
    std::cout << object;
}

std::ostream& operator<<(std::ostream& lhs, const myclass& rhs)
{
    lhs << rhs.str;

    // The ultra-chad ranged based loop
    for (int x : rhs.tab)
    {
        lhs << x;
    }

    // The chad iterator based loop
    //const int* begin = &(rhs.tab[0]);
    //const int* end = &(rhs.tab[10]);
    //for(const int* it = begin; it < end; it++)
    //{
    //    lhs << *it;
    //}

    // The virgin index based loop
    //for(int i = 0; i < sizeof(rhs.tab); i++)
    //{
    //    lhs << rhs.tab[i];
    //}
}