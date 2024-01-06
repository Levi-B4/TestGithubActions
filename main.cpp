#include <iostream>
#include <fstream>


int main(int argc, char **argv) {
    std::cout << "Welcome to Day 1 - Project 0!" << std::endl;

    std::ifstream fin(argv[1]);
    std::ofstream fout(argv[2], std::ofstream::out);
    int n;

    int total = 0;
    int numInts = 0;

    while(fin >> n){
        // output integer to terminal and output file
        std::cout << n << std::endl;
        fout << n << std::endl;

        // add integer to total and track numInts
        total += n;
        numInts++;
    }

    // output average to terminal and output file
    double average = total / numInts;
    std::cout << average << std::endl;
    fout << average << std::endl;

    int test = 0;

    fin.close();
    fout.close();

    return 0;
}
