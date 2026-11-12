#include <stdio.h>

void solveHanoi(int disks, int source, int dest, int temp) {
    if (disks == 1) {
        printf("Shift disk 1 from peg %d to peg %d\n", source, dest);
        return;
    }
    solveHanoi(disks - 1, source, temp, dest);
    printf("Shift disk %d from peg %d to peg %d\n", disks, source, dest);
    solveHanoi(disks - 1, temp, dest, source);
}

int main(void) {
    int disks;
    printf("Enter number of disks: ");
    scanf("%d", &disks);
    solveHanoi(disks, 1, 3, 2);
    return 0;
}
