#include<bits/stdc++.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main() {

    // string folder = "./competitive-guy/";
    string program ="./program.cpp";
    int N = 20;

    for(int i = 0; i <= N; ++i) {
        string number = "00" + to_string(i);
        number = number.substr(number.size() - 2);
        string inputfile = "./input/input" + number + ".txt";
        string outputfile = "./output/output" + number + ".txt";

        string gpp = "g++ ";
        string binf = " -o a.out < ";
        string pipe = " > ";
        string del = " && del a.out";

        string cmds = gpp + program + binf + inputfile + pipe + outputfile;
        system(cmds.c_str());
    }

    return 0;
}