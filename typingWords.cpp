#include <iostream>
#include<map>

using namespace std;

int main(){

    int n,j(1);
    string str;
    cin>> n;
    int init('a');

    map<char,int> alpha={{'a',1},{'b',2},{'c',3},{'d',1},{'e',2},{'f',3},{'g',1},{'h',2},{'i',3},{'j',1},{'k',2},{'l',3},{'m',1},{'n',2},{'o',3},{'p',1},{'q',2},{'r',3},{'s',4},{'t',1},{'u',2},{'v',3},{'w',1},{'x',2},{'y',3},{'z',4},{' ',1}};

    getline(cin,str);
    while(n-- && getline(cin,str)){    
        long num(0);
        for(auto i : str){
            auto itr=alpha.find(i);
            num+=itr->second;
        }
        cout<<"Case #"<<j<<" "<<num<<endl;
        j++;
    }
    return 0;
}