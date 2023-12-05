#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{

    ifstream fin("data.txt");
    string str;
    int sum = 0;
    int zap1 = 0, zap2 = 0;
    while (fin >> str)
    {
        if (str == "Game")
        {
            sum+=zap1;
            zap1=0;
            fin >> str;
            str.erase(str.length() - 1);
            zap1 = stoi(str);
        }
        else if (0 < stoi(str))
        {
            zap2 = stoi(str);
            fin >> str;
            if (str == "red," || str == "red;")
            {
                if (zap2 > 12)
                {
                    getline(fin, str);
                    zap1 = 0;
                    continue;
                }
            }
            else if (str == "blue," || str == "blue;")
            {
                if (zap2 > 14)
                {
                    getline(fin, str);
                    zap1 = 0;
                    continue;
                }
            }
            else if (str == "green," || str == "green;")
            {
                if (zap2 > 13)
                {
                    getline(fin, str);
                    zap1 = 0;
                    continue;
                }
            }
            else if(str=="red"){
                if (zap2 > 12)
                {
                    zap1 = 0;
                    continue;
                }
            }
            else if(str=="blue"){
                if (zap2 > 14)
                {
                    zap1 = 0;
                    continue;
                }
            }
                else if(str=="green"){
                if (zap2 > 13)
                {
                    zap1 = 0;
                    continue;
                }
                }
            else
            {
                cout << "BLLAAD" << endl;
                return 1;
            }
        }
    }

    cout<<"Twoja suma to: "<<sum<<endl;

    return 0;
}