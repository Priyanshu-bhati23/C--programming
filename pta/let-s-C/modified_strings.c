 #include<stdio.h>
 int main(){
 
 const char* priya = "hello world ";  // Use const to indicate it's a read-only string

    // Define an array to store the modified string
    char modifiedString[12];  // The size should be at least the length of the string

    int index = 0;

    while (*priya != '\0') {
        char i;
        scanf(" %c", &i);  // Use a space before %c to skip whitespace characters

        modifiedString[index] = i;
        priya++;  // Move to the next character in the original string
        index++;
    }

    modifiedString[index] = '\0';  // Null-terminate the modified string

    printf("Modified String: %s\n", modifiedString);

    return 0;
}
// In this code:

// We've used const char* priya to indicate that priya points to a read-only string.

// We've declared an array modifiedString to store the modified string.

// We read characters into modifiedString and moved through the original string using priya. This way, we avoid modifying a string literal directly.

// We null-terminated modifiedString to make it a valid C string.

// We added a space before %c in scanf to skip whitespace characters, making the input more user-friendly.

// Remember that modifying string literals directly is not a good practice, and it's safer to work with character arrays or dynamically allocated memory if you need to modify strings.





