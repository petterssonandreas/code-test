#include <stdint.h>
#include <stdio.h>

/* Includes? */

/* Assuming at least some functions buffer_push, buffer_pop */

int main(void)
{
    /* Setup vars/funcs if needed */

    printf("Pushing data...\n");
    for (uint8_t i = 0; i < 10; i++) {
        if (buffer_push(i)) {
            printf("Pushed %d\n", i);
        } else {
            printf("Failed to push %d\n", i);
        }
    }

    printf("\nPopping data...\n");
    uint8_t value;
    while (buffer_pop(&value)) {
        printf("Popped %d\n", value);
    }

    printf("\nEnd, checking remaining\n");

    /* Check count, full, empty etc? */

    return 0;
}
