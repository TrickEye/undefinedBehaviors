extern struct S;

int main() {
    char a[];
    char b[] = {};
    struct S s;
    char c[] = {0}; // correct
    return 0;
}