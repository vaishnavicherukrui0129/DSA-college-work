#include <stdio.h>

int a[20][20], visited[20], n;

void DFS(int v) {
    int i;

    printf("%d ", v);
    visited[v] = 1;

    for (i = 0; i < n; i++) {
        if (a[v][i] == 1 && visited[i] == 0)
            DFS(i);
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("DFS traversal: ");
    DFS(start);

    for (i = 0; i < n; i++) {
        if (visited[i] == 0)
            DFS(i);
    }

    return 0;
}