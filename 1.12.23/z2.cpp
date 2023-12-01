#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main()
{
    string liczby[9]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=0;i<9;i++){
        cout<<liczby[i]<<endl;
    }
        
    ifstream fin("data.txt");
    if (fin.good())
    {
        double sum=0;
        string str;
        while(fin>>str){
            size_t pos_min=1e10,pos_max=0;
            cout<<str<<endl;
            for(int i=0;i<9;i++){
                size_t pos=str.find(liczby[i]);
                size_t pos1=str.rfind(liczby[i]);
                if (pos!=string::npos){
                    if(pos_min > pos) pos_min=pos;
                    if(pos_max<pos1)pos_max=pos1;
                }
            }
            for(int i=0;i<9;i++){
                size_t pos=str.find(liczby[i]);
                if(pos==pos_min){
                    str.insert(pos,to_string(i+1));
                }
            }

            for(int i=0;i<9;i++){
                size_t pos=str.rfind(liczby[i]);
                if(pos==pos_max+1){
                    str.insert(pos,to_string(i+1));
                }
                
            }
            cout<<str<<endl;

            string suma;
            size_t j=str.find_first_of("1234567890");
            suma+=str[j];
            j=str.find_last_of("1234567890");
            suma+=str[j];
            sum+=stoi(suma);
            cout<<suma<<endl;
            cout<<"\n\n************\n\n";

        }
        cout<<"Suma wszystkich liczb to: "<<sum<<endl;
        
    }
    else
    {
        fin.close();
    }

    return 0;
}