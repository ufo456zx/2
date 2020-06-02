#include <stdio.h>

void print_noSpace(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ')
			printf("%c", str[i]);
	}
}

int main() {
	print_noSpace("Hello, World!\n");
	print_noSpace("My name is seongmin \n");
}
