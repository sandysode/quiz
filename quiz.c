#include <stdio.h>
#include <stdlib.h>

int main() {
    char answer;
    int score = 0;

    printf("Bible Quiz\n");

    printf("1. Who is the oldest man in the Bible?\n");
    printf("A. Jesus\n");
    printf("B. Devil\n");
    printf("C. Methuselah\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if (answer == 'C') {
        printf("You are right.\n");
        score++;
    } else {
        printf("You are wrong.\n");
    }

    printf("2. How many books are there in the New Testament?\n");
    printf("A. 26\n");
    printf("B. 27\n");
    printf("C. 28\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if (answer == 'B') {
        printf("You are right.\n");
        score++;
    } else {
        printf("You are wrong.\n");
    }

    printf("3. How many books are there in the old Testament?\n");
    printf("A. 26\n");
    printf("B. 27\n");
    printf("C. 39\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if (answer == 'C') {
        printf("You are right.\n");
        score++;
    } else {
        printf("You are wrong.\n");
    }

    printf("4. How many books are there in the bible?\n");
    printf("A. 66\n");
    printf("B. 27\n");
    printf("C. 50\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if (answer == 'A') {
        printf("You are right.\n");
        score++;
    } else {
        printf("You are wrong.\n");
    }

    printf("5. jacob has how many sons?\n");
    printf("A. 20\n");
    printf("B. 12\n");
    printf("C. 28\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if (answer == 'B') {
        printf("You are right.\n");
        score++;
    } else {
        printf("You are wrong.\n");
    }


    printf("6. Who betrayed jesus?\n");
    printf("A. simon peter\n");
    printf("B. john\n");
    printf("C. devil\n");
    printf("Answer: ");
    scanf(" %c", &answer);

    if (answer == 'A') {
        printf("You are right.\n");
        score++;
    } else {
        printf("You are wrong.\n");
    }

    printf("\nQuiz Completed!\n");
    printf("Your Score: %d out of 6\n", score);

    return 0;
}
