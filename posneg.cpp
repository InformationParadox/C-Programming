
#include <stdio.h>
int main() {
int num, pos_count = 0, neg_count = 0;
double pos_sum = 0, neg_sum = 0;
printf("Enter numbers, -1 to end:\n");
while (1) {
scanf("%d", &num);
if (num == -1) {
break;
} else if (num >= 0) {
pos_count++;
pos_sum += num;
} else {
neg_count++;
neg_sum += num;
}
}
if (pos_count > 0) {
printf("Average of positive numbers: %.2f\n", pos_sum / pos_count);
} else {
printf("No positive numbers entered.\n");
}
if (neg_count > 0) {
printf("Average of negative numbers: %.2f\n", neg_sum / neg_count);
} else {
printf("No negative numbers entered.\n");
}
return 0;
}