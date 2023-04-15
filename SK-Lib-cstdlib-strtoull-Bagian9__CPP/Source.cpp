#include <cstdio>
#include <cstdlib>
#include <conio.h>

int main() {
	char str1[] = "123";
	char str2[] = "10.55";
	char str3[] = "100 some words";
	char str4[] = "some words 555";

	char* end;

	unsigned long long int num1 = strtoull(str1, &end, 10);
	unsigned long long int num2 = strtoull(str2, &end, 10);
	unsigned long long int num3 = strtoull(str3, &end, 10);
	unsigned long long int num4 = strtoull(str4, NULL, 10);

	//menampilkan hasil
	printf("strtoull(\"%s\") = %llu\n", str1, num1);
	printf("strtoull(\"%s\") = %llu\n", str2, num2);
	printf("strtoull(\"%s\") = %llu\n", str3, num3);
	printf("strtoull(\"%s\") = %llu\n", str4, num4);

	_getch();
	return 0;
}