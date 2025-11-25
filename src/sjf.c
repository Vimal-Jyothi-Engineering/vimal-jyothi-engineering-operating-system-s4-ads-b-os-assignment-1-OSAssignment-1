#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int bt[n], wt[n], tat[n], p[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }

    // SJF Sorting
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bt[j] < bt[i]) {
                int temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
                temp = p[i]; p[i] = p[j]; p[j] = temp;
            }
        }
    }

    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = wt[i - 1] + bt[i - 1];

    for (int i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];

    printf("Process BT WT TAT\n");
    for (int i = 0; i < n; i++)
        printf("P%d %d %d %d\n", p[i], bt[i], wt[i], tat[i]);

    return 0;
}
