#include <stdio.h>

#include "minunit.h"
#include "uloha1.h"

int tests_run = 0;
char *results [100];

int foo = 7;
int bar = 4;

static char * test_foo() {
    mu_assert("error, foo != 7", foo == 7);
    return 0;
}

static char * test_bar() {
    mu_assert("error, bar != 5", bar == 5);
    return 0;
}

static char * test_uloha1() {
    int vysledok = skusam(2);
    mu_assert("error, vysledok != 3", vysledok == 3);
    return 0;
}

static char * all_tests() {
    mu_run_test(test_foo);
    mu_run_test(test_bar);
    mu_run_test(test_uloha1);
    return 0;
}

int main(int argc, char **argv) {
    all_tests();
    for(int i = 0; i<=tests_run; i++) {
        if(results[i] != NULL) {
            printf("%s\n", results[i]);
        }
    }
    printf("Tests run: %d\n", tests_run);
}