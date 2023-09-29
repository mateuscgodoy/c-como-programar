#include <stdio.h>

void moveDisk(char source, char destination) {
    printf("Move disk from %c to %c\n", source, destination);
}

void hanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        moveDisk(source, destination);
    } else {
        hanoi(n - 1, source, destination, auxiliary);
        moveDisk(source, destination);
        hanoi(n - 1, auxiliary, source, destination);
    }
}

int main() {
    int numDisks = 3;  // Change this to the number of disks you have.
    hanoi(numDisks, 'A', 'B', 'C');
    return 0;
}
