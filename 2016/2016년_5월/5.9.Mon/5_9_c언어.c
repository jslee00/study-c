//#include <stdio.h>
//
//int main() {
//	int arr[6][6] = { 0 }; // = { {1,2,3,4,5},{ 1,2,3,4,5 },{ 1,2,3,4,5 },{ 1,2,3,4,5 },{ 1,2,3,4,5 }}
//	int a, b, c = 1, max = 0;
//
//	for (a = 0; a < 5; a++) {
//		for (b = 0; b < 5; b++) {
//			arr[a][b] += c;
//			c++;
//		}
//	}
//	for (a = 0; a < 5; a++) {
//		for (b = 0; b < 5; b++) {
//			arr[a][5] += arr[a][b];
//		}
//	}
//	for (a = 0; a < 5; a++) {
//		for (b = 0; b < 5; b++) {
//			arr[5][a] += arr[b][a];
//		}
//	}
//	for (a = 0; a < 5; a++) {
//		arr[5][5] += arr[5][a];
//
//	}
//	for (a = 0; a < 6; a++) {
//		for (b = 0; b < 6; b++) {
//			printf("%4d", arr[a][b]);
//		}
//		printf("\n");
//	}
//}