#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{

    ifstream fin("data.txt");
    if (fin.good())
    {
        int sum=0;
        string str;
        while (fin>>str){
            string suma;
            size_t j=str.find_first_of("123456789");
            suma+=str[j];
            j=str.find_last_of("123456789");
            suma+=str[j];
            sum+=stoi(suma);
        }

        cout<<"Suma wszystkich liczb to: "<<sum<<endl;
    }
    else
    {
        fin.close();
    }

    return 0;
}