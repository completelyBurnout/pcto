#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome to the English Grammar Quiz!\n\n");

    // Define questions and answers
    char *questions[20] = {
        "1. What is the plural form of 'child'?\n a) childs\n b) childes\n c) children\n",
        "2. Which of the following is a preposition?\n a) run\n b) on\n c) jump\n",
        "3. What is the past tense of 'go'?\n a) went\n b) goed\n c) goed\n",
        // Add more questions here...
    };

    char answers[20] = {'c', 'b', 'a'};  // Add correct answers here

    // Initialize score
    int score = 0;

    // Start the quiz
    int question_num = 0;
    while (question_num < 20) {
        printf("%s", questions[question_num]);
        char user_answer[2];
        printf("Your answer: ");
        scanf("%s", user_answer);

        if (strcmp(user_answer, &answers[question_num]) == 0) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Incorrect!\n\n");
        }
        question_num++;
    }

    // Estimate English level based on score
    char *level;
    if (score >= 16) {
        level = "Advanced";
    } else if (score >= 11) {
        level = "Intermediate";
    } else {
        level = "Beginner";
    }

    // Display the result
    printf("Quiz completed!\n\n");
    printf("Your score: %d out of 20\n", score);
    printf("Your English level: %s\n", level);

    return 0;
}