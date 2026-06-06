/*
Problem: Querying the Document
Concept: Functions
Platform: HackerRank
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n - 1][m - 1][k - 1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 
    return document[m - 1][k - 1];
}

char*** kth_paragraph(char**** document, int k) {
    return document[k - 1];
}

char**** get_document(char* text) {
    char**** document = malloc(1000 * sizeof(char***));
    
    int char_index, word_index, sentence_index, paragraph_index;
    char_index = word_index =sentence_index = paragraph_index = 0;
    
    char word_buffer[1000];
    
    document[0] = malloc(1000 * sizeof(char**));
    document[0][0] = malloc(1000 * sizeof(char*));
    
    for(int i = 0; ; i++) {
        if(text[i] != ' ' && text[i] != '.' && text[i] != '\n' && text[i] != '\0') {
            word_buffer[char_index] = text[i];
            char_index++;
        } else {
            word_buffer[char_index] = '\0';
            
            // Storing the word into the sentence
            if(char_index > 0) {
                char* new_word = malloc(strlen(word_buffer) + 1);
                
                strcpy(new_word, word_buffer);
                
                document[paragraph_index][sentence_index][word_index] = new_word;
                
                word_index++;
            } 
            
            char_index = 0;
        
        
            if(text[i] == ' ') {
                continue;
            } else if(text[i] == '.') {
                sentence_index++;
                
                document[paragraph_index][sentence_index] = malloc(1000 * sizeof(char*));
                
                word_index = 0;
            } else if(text[i] == '\n') {
                paragraph_index++;
                
                document[paragraph_index] = malloc(1000 * sizeof(char***));
                
                sentence_index = 0;
                word_index = 0;
                
                document[paragraph_index][sentence_index] = malloc(1000 * sizeof(char*));
            } else if(text[i] == '\0') {
                break;
            }
        }
    }
    
    return document;
}


char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
} 

void print_paragraph(char*** paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main() 
{
    char* text = get_input_text();
    char**** document = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        }

        else if (type == 2){
            int k, m;
            scanf("%d %d", &k, &m);
            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        }

        else{
            int k;
            scanf("%d", &k);
            char*** paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }     
}