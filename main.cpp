#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include <cstdlib>
#include<stdlib.h>
#include<string.h>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::max;
using std::vector;
using std::ostream;
using std::setw;
using std::setfill;

string mult(string n, int x){
       int add=0,num;
       string str="";
       for (int i=n.size()-1; i>=0; i--){
           num=((int)n[i]-48)*x+add;
           str=char(num%10+48)+str;
           add=num/10;
       }
       string tostr="";
       int d=1;
       while (add>=d){
             tostr=char((add%(d*10))/d+48)+tostr;
             d*=10;
       }
       return tostr+str;
}

////////////////////////////////////////////////////
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if(!fin)
    {
        cout << "File not opened!";
        return 1;
    }

    int n;
    fin >> n;

    string str = "1";
    for(int i = 1; i <= n; i++)
        str = mult(str, i);

    fout << str;


    fin.close();
    fout.close();
    return 0;
}

