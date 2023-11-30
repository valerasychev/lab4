#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("2.txt");  // вывод данных из файл
    ofstream fout("2.txt"); // ввод данных в файла
    string a;
    string b;
   double x, y;

    for (int x=-7; x<3; x++)
    {
    if (-6 >= x && x >= -7) // отрезок от -7 до -6
    {
        y = 1;
    }
    else if (x <= -4) // отрезок от -6 до -4
    {
        y = -0.5 * x - 2;
    }
    else if (x <= 0) // отрезок от -4 до 0
    {
        y = sqrt(4 - pow((x + 2), 2)); // расчет у для заданного отрезка
    }
    else if (x <= 2) // отрезок от 0 до 2
    {
        y = -sqrt((1) - pow((x - 1), 2)); // расчет у для заданного отрезка
    }
    else if (x <= 3) // отрезок от 2 до 3
    {
        y = -x + 2; // расчет у для заданного отрезка
    }

    fout << y << endl;
}

    fout.close();

cout << "sled"<< endl;


    while (getline(fin, b))
    {
       
        float c = stof(b);
        for (int i=0; i<5; i++){
            
            c = c;
        }
        
        cout << c << endl;
    }

    fin.close(); // закрываем файл
}
