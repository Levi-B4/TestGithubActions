#include <iostream>
#include <fstream>


int main(int argc, char **argv) {
    std::cout << "Welcome to Day 1 - Project 0!" << std::endl;

    std::ifstream fin(argv[1]);
    std::ofstream fout(argv[2]);
    int n;

    while(fin >> n){
      std::cout << n << std::endl;
      fout << n << std::endl;
    }


    int test = 0;
    fin.close();
    fout.close();

    return 0;
}
