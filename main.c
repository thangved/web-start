#include <stdio.h>
#include <stdlib.h>
void nhap_mang(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void xuat_mang(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void de(int *a, int *n, int x, int k)
{
    realloc(*a, (*n + 1) * sizeof(int));
    int i;
    for (i = *n - 1; i >= k; --i)
    {
        a[i + 1] = a[i];
    }
    a[k] = x;
    n++;
}
int main()
{
    int *a;
    int n;
    scanf("%d", &n);
    a = (int *)realloc(NULL, n * sizeof(int));
    nhap_mang(a, n);
    xuat_mang(a, n);
    int x;
    scanf("%d", &x);
    int vitri;
    scanf("%d", &vitri);
    printf("\n");
    de(a, &n, x, vitri);
    xuat_mang(a, n);
    free(a);
}