#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");

    vector<char> myVector;






    string name = "myfile.txt";
    ifstream fin;

    fin.open(name);

    if (!fin.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;

    }
    else
    {
        cout << "Файл открыт" << endl;
    }
    char ch;
    int numb;
    int numb2;
    numb = 1;
    numb2 = 1;
    while (fin.get(ch))
    {
        myVector.push_back(ch);
        numb++;

        cout << ch;
        if (numb == 12)
        {
            cout << "\n";
            numb = 0;
            numb2++;
        }
        if (numb == numb2)
        {
            cout << "*";
        }
    }
}
