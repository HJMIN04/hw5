#include <iostream>
using namespace std;
void main() {
	// matrix in 1D
	int N = 3, M = 5, i = 0, a = 0;
	float A[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}, * B;
	B = new float[N * M];

	for(int n = 0; n < N; n++){
		for (int m = 0; m < M; m++) {
			B[m * N + n] = A[i];
				i++;
		}
	}

	// show results
	for (int m = 0; m < M; m++) {
		for (int n = 0; n < N; n++) {
			cout << B[ m * N + n] << "  ";
		}
		cout << endl;
	}

	delete[]  B;
}