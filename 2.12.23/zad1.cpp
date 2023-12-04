#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){

    ifstream fin ("data.txt");
    string str;
    int sum=0;
    while(getline(fin,str)){
        stringstream s(str);
        string st;
        while(s>>st){
            if(st=="Game"){
                s>>st;
                st=r
            }
        }
    }

    return 0;
}