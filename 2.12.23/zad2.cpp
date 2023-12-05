#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{

    ifstream fin("data.txt");
    string str;
    int sum = 0;
    int zap2 = 0;
    int red=0,blue=0,green=0;
    while (fin >> str)
    {
        if (str == "Game")
        {
            zap1=0;
            sum+=(red*blue*green);
            red=0;
            blue=0;
            green=0;
            fin >> str;
        }
        else if (0 < stoi(str))
        {
            zap2 = stoi(str);
            fin>>str;
            if (str == "red," || str == "red;"||str == "red")
            {
                if(red<zap2){
                    red=zap2;
                }
            }
            else if (str == "blue," || str == "blue;"||str == "blue")
            {
                if(blue<zap2){
                    blue=zap2;
                }
            }
            else if (str == "green," || str == "green;"||str == "green")
            {
                if(green<zap2){
                    green=zap2;
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