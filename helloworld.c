#include <stdio.h>

int power(int m, int n);

//main()
//{
//	//printf("hello, world\n");
//	//int fahr, celsius;
//	//int lower, upper, step;
//
//	//lower = 0;
//	//upper = 300;
//	//step = 20;
//
//	//fahr = lower;
//	//while (fahr <= upper) {
//	//	celsius = 5 * (fahr - 32) / 9;
//	//	printf("%d\t%d\n", fahr, celsius);
//	//	fahr = fahr + step;
//	//}
//
//	/*int c, n;
//	n = 0;
//	while ((c = getchar()) != EOF) {
//		if (c == '\n') {
//			++n;
//		}
//		printf("%d\n", n);
//	}*/
//
//	/*int c, i, nwhite, nother;
//	int ndigit[10];
//	nwhite = nother = 0;
//	for (i = 0; i < 10; ++i) {
//		ndigit[i] = 0;
//	}
//	
//	while ((c = getchar()) != EOF) {
//		if (c >= '0' && c <= '9') {
//			++ndigit[c - '0'];
//		}
//		else if (c == ' ' || c == '\n' || c == '\t') {
//			++nwhite;
//		}
//		else {
//			++nother;
//		}
//	}
//
//	printf("digits = ");
//	for (i = 0; i < 10; ++i) {
//		printf(" %d", ndigit[i]);
//	}
//
//	printf(", white space=%d, other=%d\n", nwhite, nother);*/
//
//	int i;
//	for (i = 0; i < 10; ++i) {
//		printf("%d %d %d\n", i, power(2, i), power(-3, i));
//	}
//	return 0;
//}

int power(int base, int n) {
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i) {
		p = base * p;
	}
	return p;
}


int abs(int num) {
	return 0;
}