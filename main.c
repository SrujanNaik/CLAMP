#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int min;
	int hour;
	int day;
	int month;
	int year;
}activationTime;

int main(){
	
	char input[255];
	printf("Enter the time: ");
	fgets(input, sizeof(input), stdin);

	// Remove the newline character (if present)
	input[strcspn(input, "\n")] = '\0';

	// Extracting to time
	char cp_input[255];
	strcpy(cp_input, input);
	printf("%s\n", cp_input);
	char *token;
	int time[5];				// For extracting Time
	for(int i = 0; i < 5; i++){
		time[i] = 1;
	}
	int i = 0, count = 0;
	char delimiter[] = ":";
	char *saveptr;
	token = strtok_r(cp_input, delimiter, &saveptr);
	while(token != NULL){
		count++;
		time[i++] = atoi(token);
		token = strtok_r(NULL, delimiter, &saveptr);
	}
	if(count < 5){
		printf("all the remaing values will be set to 1\n");
	}

	// Assining the time to the struct
	activationTime at;
	at.min = time[0];
	at.hour = time[1];
	at.day = time[2];
	at.month = time[3];
	at.year =time[4];
	
	// For path extraction
	char cp_path[255];
	strcpy(cp_path, input);
	char *path;
	path = strtok_r(cp_path, " ", &saveptr);
	path = strtok_r(NULL, " ", &saveptr);
	printf("\n%s\n", path);

	return 0;
}
