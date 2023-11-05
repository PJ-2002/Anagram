#include <stdio.h>
#include <string.h>
#define NO_OF_CHARS 256 

// A function to check if two strings are anagrams or not
int areAnagram(char* str1, char* str2)
{
    int freq1[NO_OF_CHARS] = {0}; 
    int freq2[NO_OF_CHARS] = {0}; 
    int i;

    // Loop through the characters of both strings and increment their frequencies
    for (i = 0; str1[i] && str2[i]; i++)
    {
        freq1[str1[i]]++;
        freq2[str2[i]]++;
    }

    // If the lengths of the strings are not equal, they are not anagrams
    if (str1[i] || str2[i])
        return 0;

    // Compare the frequencies of each character in both strings
    for (i = 0; i < NO_OF_CHARS; i++)
        if (freq1[i] != freq2[i])
            return 0;

    return 1;
}

int main()
{
    char str1[] = "listen";
    char str2[] = "silent";

    // Call the areAnagram function and print the result
    if (areAnagram(str1, str2))
        printf("The two strings are anagram of each other\n");
    else
        printf("The two strings are not anagram of each other\n");

    return 0;
}
