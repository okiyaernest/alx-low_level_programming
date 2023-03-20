#include <unistd.h>

int main(void) {
    char *art = "A masterpiece of art is the expression of one's soul.\n";
    write(STDOUT_FILENO, art, sizeof(art));
    return 0;
}
