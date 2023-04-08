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
double heron_formula(triangle triangle)
{
    double p=(triangle.a + triangle.b + triangle.c)/2.00;
    return sqrt(p*(p-triangle.a)*(p-triangle.b)*(p-triangle.c));
}
void swap_order(triangle *triangle1, triangle*triangle2)
{
    triangle triangle_temp=*triangle1;
    *triangle1=*triangle2;
    *triangle2=triangle_temp;
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(heron_formula(tr[i])>heron_formula(tr[j]))
            {
                swap_order(&tr[i],&tr[j]);
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