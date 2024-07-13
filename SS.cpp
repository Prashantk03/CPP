#include <stdio.h>

void print_subset(int subset, int *set)
{
    int pos = 0;
    int sum = 0;
    printf("Subset %d = ", subset);
    while (subset)
    {
        if (subset & 1)
        {
            printf("%d ", set[pos]);
            sum += set[pos];
        }
        subset >>= 1;
        pos++;
    }
    printf("==> Sum = %d \n", sum);
}

int main()
{
    int no_of_element = 3;
    int no_of_subset, x, a[50];

    printf("Enter the elements of main set :");
    for (x = 0; x < no_of_element; x++)
        scanf("%d", &a[x]);

    no_of_subset = (1 << no_of_element);
    printf("There are %d subsets\n", no_of_subset);

    for (; no_of_subset--;)
    {
        print_subset(no_of_subset, a);
    }
}