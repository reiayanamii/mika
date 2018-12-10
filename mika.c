#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char intro[] = "Hi! I'm Mika, a cute anime girl!\n";
	char ask[] = "How can I help? (Enter help for suggestions.)\n";
	char confused[] = "I don't understand.\n";
	char joke[] = "My dog has no nose. It smells terribly!\n";
	char helpList[] = "Try entering:\njoke\nexit\n";

	char input[100];


	printf("%s", intro);

	while (1) {
		printf("%s", ask);
		scanf("%s", input);

		if ( 0 == (strcmp(input, "exit")) ) {
			exit(0);
		}

		else if ( 0 == (strcmp(input, "help")) ) {
			printf("%s", helpList);
		}

		else if ( 0 == (strcmp(input, "joke")) ) {
			printf("%s", joke);
		}

		else {
			printf("%s", confused);
		}

	}

	return 0;
}