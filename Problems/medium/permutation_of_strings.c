/*
Problem: Permuation of Strings
Concept: Functions
Platform: HackerRank 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
	// Finding pivot
    int pivot = -1;
    
    for(int i = n - 2; i >= 0; i--) {
        if(strcmp(s[i], s[i + 1]) < 0) {
            pivot = i;
            break;
        }
    }
    
    // If there is no next permutation
    if(pivot == -1) {
        return 0;
    }
    
    // Finding element smaller than pivot
    int swap_index = -1;
    
    for(int i = n - 1; i >= pivot; i--) {
        if(strcmp(s[i], s[pivot]) > 0) {
            swap_index = i;
            break;
        }
    }
    
    // Swapping the pivot and swap index
    char* temp = s[pivot];
    s[pivot] = s[swap_index];
    s[swap_index] = temp;
    
    // Reversing the elements to the right of pivot
    int left = pivot + 1;
    int right = n - 1;
    
    while(left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        left++;
        right--;
    }
    
    // Successful generation of next permutation
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}