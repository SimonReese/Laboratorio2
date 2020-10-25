// FileReader.cpp : Somma dei numeri separati da uno spazio su un file
#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inf;
    inf.open("input.txt");
    int s = 0;
    if (inf.is_open()) {
        int i = 0;
        while (inf.peek() != EOF) {
            inf >> i;
            s += i;
        }
    }
    std::cout << s;
}