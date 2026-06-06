/*
Problem: Small Triangles, Large Triangles
Concept: Struct and Enums
Platform: HackerRank
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            float p_i = (tr[i].a + tr[i].b + tr[i]. c) / 2.0;
            double area_i = sqrt(p_i * (p_i - tr[i].a) * (p_i - tr[i].b) * (p_i - tr[i].c));
            float p_j= (tr[j].a + tr[j].b + tr[j]. c) / 2.0;
            double area_j = sqrt(p_j * (p_j - tr[j].a) * (p_j - tr[j].b) * (p_j - tr[j].c));
            
            triangle temp;
            
            if(area_i > area_j) {
                temp = tr[i];
                tr[i] = tr[j];
                tr[j] = temp;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}