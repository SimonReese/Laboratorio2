// FileReaderV2.cpp : Somma dei numeri su un file
#include <iostream>
#include <fstream>
#include <cctype>

int main()
{
    std::ifstream inf;
    inf.open("input.txt");
    int s = 0;
    if (inf.is_open()) {
        char c = 0;
        while (inf.peek() != EOF) {
            inf.get(c);
            if (std::isdigit(c)) {
                int i = c - '0';
                s += 1;
            }
        }
    }
    std::cout << "Somma: " << s <<std::endl;
}