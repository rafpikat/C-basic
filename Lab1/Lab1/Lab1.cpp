#include<iostream>
#include<math.h>

using namespace std;

void convert216(int number, int convertNum);

int main(int argc, char* argv[])
{
	int number, convertNum;
	std::cout << "Nhap so muon chuyen: ";
	cin >> number;
	std::cout << "Nhap he so muon chuyen: ";
	cin >> convertNum;
	convert216(number, convertNum);

	return 0;
}

void convert216(int number, int convertNum) {
	if (number == 0) {
		std::cout << 0;
		return;
	}

	int temp = number, soMu = 0;
	while (pow(convertNum, soMu) <= number) {
		soMu++;
	}

	for (int i = soMu - 1; i >= 0; i--) {
		int nc = temp / pow(convertNum, i);
		convertNum == 16 ? (nc >= 10 ? std::cout << static_cast<char>(nc + 55) : std::cout << nc) : std::cout << nc;
		temp = temp % static_cast<int>(pow(convertNum, i));
	}
}