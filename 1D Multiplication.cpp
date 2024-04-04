#include <iostream>
using namespace std;
void main() {
// matrix in 1D
int N = 5, K=2,  M = 3, t=0, a=0;
float A[] = { 1,2,3,4,5,6,7,8,9, 10 }, * B, * C;
B = new float[K * M];
C = new float[N * M];
B[0] = 1; B[1] = 0; B[2] = 1;
B[3] = 0; B[4] = 2; B[5] = 3;

for (int n = 0; n < N; n++) {
	for (int i = 0; i < M; i++){
			for (int m = 0; m < K; m++) {
				t += (A[n * K + m]) * (B[m * M + i]);
				}
			C[a] = t;
			t = 0;
			a++;
		}
	}

// show results
for (int n = 0; n < N; n++) {
	for (int m = 0; m < M; m++) {
		cout << C[n * M + m] << "  ";
	}
	cout << endl;
}
delete[] B;
delete[] C;
}
