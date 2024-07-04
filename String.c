#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype for concatenation
char* concatStrings(char* str1, char* str2);

int main() {
    // Declare two strings
    char str1[100] = "Hello";
    char str2[] = ", World!";
    
    // Call the function to concatenate the strings
    char* result = concatStrings(str1, str2);
    
    // Print the concatenated string
    printf("Concatenated string: %s\n", result);
    
    // Free the dynamically allocated memory
    free(result);
    
    return 0;
}

// Function definition to concatenate two strings
char* concatStrings(char* str1, char* str2) {
    // Calculate the length of the second string
    int len2 = strlen(str2);
    
    // Allocate memory for the concatenated string
    // Add 1 to len1 + len2 to account for the null terminator
    char* result = malloc((strlen(str1) + len2 + 1) * sizeof(char));
    
    // Copy characters from str1 to result
    strcpy(result, str1);
    
    // Append characters from str2 to result
    strcat(result, str2);
    
    // Return the pointer to the concatenated string
    return result;
}
