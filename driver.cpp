#include<bits/stdc++.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main() {

    string folder = "./true-cop/";
    string program = folder + "program.cpp";
    int N = 15;

    for(int i = 0; i <= N; ++i) {
        string number = "00" + to_string(i);
        number = number.substr(number.size() - 2);
        string inputfile = folder + "input/input" + number + ".txt";
        string outputfile = folder + "output/output" + number + ".txt";

        string gpp = "g++ ";
        string binf = " -o temp && temp.exe < ";
        string pipe = " > ";
        string del = " && del temp.exe";

        string cmds = gpp + program + binf + inputfile + pipe + outputfile + del;
        system(cmds.c_str());
    }

    return 0;
}