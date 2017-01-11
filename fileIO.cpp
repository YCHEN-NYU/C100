#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;

    fin.open("in.txt");
    if(!fin.is_open())
    {
        cerr << "error: open input file failed!" << endl;
        abort();
    }

    int sum = 0, number, count = 0;
    while(!(fin.eof()))
    {
        fin >> number; 
        sum += number;
        ++count;
    }

    double average = double(sum)/count;
    cout << "Count = "  << count << " average = " << average << endl;
    fin.close();

    fout.open("out.txt");
    if(!fout.is_open())
    {
        cerr << "error: open output file failed!" << endl;
        abort();
    }

    fout << "sum \t" << setprecision(3) <<  sum << endl;
    fout << "average \t " << setprecision(3) << average << endl;
    fout.close();
    return 0;
}

