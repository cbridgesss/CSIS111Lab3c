// Bridges
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	ofstream output;
	int A[3][4];
	int B[3][4];
	int C[3][4];
	input.open("A.txt");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			input >> A[i][j]; //A[0][0] = 12
		}

		output << "Here is Array A: ";

		for (int j = 0; j < 4; j++)
		{
			output << A[i][j];
		}
	}
	output.close("A.txt");
	{
		input.open("B.txt")
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				input >> B[i][j]; //B[0][0] = 12
			}

			output << "Here is Array B: ";

			for (int j = 0; j < 4; j++)
			{
				output << B[i][j];
			}
		}
		output.close("B.txt");
	}
	{
		output.open("C.txt");
		if A[i][j] >> B[i][j];
		then A[i][j] goes into "C.txt"
		else B[i][j] goes into "C.txt"
	}
}
