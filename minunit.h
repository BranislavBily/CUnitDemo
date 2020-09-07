//
// Created by Branislav Bilý on 07/09/2020.
//

#ifndef TESTINGDEMO_MINUNIT_H
#define TESTINGDEMO_MINUNIT_H

#endif //TESTINGDEMO_MINUNIT_H
#define mu_assert(message, test) do { if (!(test)) return message; } while (0)
#define mu_run_test(test) do { char *message = test(); tests_run++; \
                                if (message) return message; } while (0)
extern int tests_run;
