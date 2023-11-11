#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Interval {
    int start, finish;
} intervals[100];

int output1;

int compare(const void* a, const void* b) {
    struct Interval *x = (struct Interval*)a, *y = (struct Interval*)b;
    return x->finish - y->finish;
}

int lectureHallScheduling(int input1, int input2[], int input3[]) {
    int i, last_finished, cnt;
    
    for (int i = 0; i < input1; i++) {
        intervals[i].start = input2[i];
        intervals[i].finish = input3[i];
    }

    qsort(intervals, input1, sizeof(struct Interval), compare);

    for (i = last_finished = cnt = 0; i < input1; i++) {
        if (intervals[i].start >= last_finished) {
            cnt++;
            last_finished = intervals[i].finish;
        }
    }

    output1 = cnt;
    return output1;
}

int main() {
    // Example usage:
    int input1 = 3;
    int input2[] = {3, 2, 6};
    int input3[] = {5, 8, 9};

    int result = lectureHallScheduling(input1, input2, input3);
    printf("Maximum number of requests that can be accepted: %d\n", result);

    return 0;
}
