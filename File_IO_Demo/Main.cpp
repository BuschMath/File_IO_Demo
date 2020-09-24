#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("InputData.dat");

	ofstream outfile;
	outfile.open("OutputData.dat");

	char input1, input2, input3, input4, input5;

	infile >> input1 >> input2 >> input3 >> input4 >> input5;

	cout << input5 << " " << input4 << " " << input3 << " " << input2 << " " << input1 << "\n";

	outfile << input5 << " " << input4 << " " << input3 << " " << input2 << " " << input1 << "\n";

	infile.close();
	outfile.close();

	return 0;
}