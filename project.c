#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
    int choice;

    //  QUESTIONS (25) 
    char questions[25][200] = {
        "Q) What is the capital of India?\na) Delhi\nb) Mumbai\nc) Kolkata",
        "Q) 5 + 7 = ?\na) 12\nb) 10\nc) 14",
        "Q) Which language uses printf?\na) Java\nb) C\nc) Python",
        "Q) Who invented C language?\na) Dennis Ritchie\nb) James Gosling\nc) Guido Rossum",
        "Q) Which is an odd number?\na) 10\nb) 8\nc) 7",
        "Q) Which keyword is used for loops?\na) for\nb) int\nc) main",
        "Q) Which symbol is used for AND?\na) &&\nb) ||\nc) !",
        "Q) Largest planet?\na) Earth\nb) Jupiter\nc) Mars",
        "Q) Shortcut for copy?\na) Ctrl + C\nb) Ctrl + V\nc) Ctrl + X",
        "Q) C is a ______ language?\na) High level\nb) Low level\nc) No level",
        "Q) Which is the smallest prime number?\na) 1\nb) 2\nc) 3",
        "Q) Which data type stores characters?\na) char\nb) int\nc) float",
        "Q) Which operator is OR in C?\na) &&\nb) ||\nc) !",
        "Q) Which company created C?\na) Bell Labs\nb) Microsoft\nc) Google",
        "Q) Which device inputs text?\na) Monitor\nb) Keyboard\nc) Speaker",
        "Q) King of the jungle?\na) Tiger\nb) Lion\nc) Elephant",
        "Q) Which number is even?\na) 7\nb) 11\nc) 12",
        "Q) Which is a loop statement?\na) return\nb) for\nc) break",
        "Q) RAM stands for?\na) Random Access Memory\nb) Read All Memory\nc) Run Anytime Machine",
        "Q) Header file for printf?\na) stdio.h\nb) string.h\nc) math.h",
        "Q) Earth revolves around the?\na) Moon\nb) Sun\nc) Mars",
        "Q) What number system do computers use?\na) Decimal\nb) Hexadecimal\nc) Binary",
        "Q) Shortcut for undo?\na) Ctrl + C\nb) Ctrl + Z\nc) Ctrl + Q",
        "Q) Which is a storage device?\na) Hard disk\nb) Keyboard\nc) Speaker",
        "Q) Largest ocean?\na) Pacific Ocean\nb) Indian Ocean\nc) Atlantic Ocean"
    };

    // ---------------- CORRECT ANSWERS (25) ----------------
    char answers[25] = {
        'a','a','b','a','c','a','a','b','a','a',
        'b','a','b','a','b','b','c','b','a','a',
        'b','c','b','a','a'
    };

    // ---------------- RIDDLES (10) ----------------
    char riddles[10][200] = {
        "I have keys but no locks. What am I?",
        "What has to be broken before you can use it?",
        "What gets wetter the more it dries?",
        "What has hands but cannot clap?",
        "What can travel around the world while staying in one corner?",
        "What has a neck but no head?",
        "What has one eye but cannot see?",
        "What building has the most stories?",
        "The more you take, the more you leave behind. What am I?",
        "I am tall when I am young and short when I am old. What am I?"
    };

    char riddle_answers[10][50] = {
        "keyboard","egg","towel","clock","stamp",
        "bottle","needle","library","footsteps","candle"
    };

    srand((unsigned int) time(NULL));

    while (1) {
        printf("\n---- SIMPLE C PROJECT ----\n");
        printf("1. Take a Random Quiz\n");
        printf("2. Tell me a Joke\n");
        printf("3. Give me a Riddle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Please enter a valid number.\n");
            continue;
        }
        getchar(); // consume newline

        if (choice == 1) {
            FILE *fp = fopen("quiz_results.txt", "a");
            if (fp == NULL) {
                printf("Error opening file for writing.\n");
                return 1;
            }

            int used[25] = {0};
            int qcount = 5;
            int score = 0;

            printf("\n*** RANDOM QUIZ STARTED ***\n");

            for (int i = 0; i < qcount; i++) {
                int r;
                do {
                    r = rand() % 25;
                } while (used[r]);
                used[r] = 1;

                printf("\n%s\nYour answer: ", questions[r]);

                char ansChar;
                if (scanf(" %c", &ansChar) != 1) {
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF) {}
                    ansChar = ' ';
                }
                getchar();

                ansChar = (char) tolower((unsigned char) ansChar);

                if (ansChar == answers[r]) {
                    printf("Correct!\n");
                    score++;
                    fprintf(fp, "Question: %s | Your answer = %c -> Correct\n", questions[r], ansChar);
                } else {
                    printf("Wrong! Correct answer: %c\n", answers[r]);
                    fprintf(fp, "Question: %s | Your answer = %c -> Wrong (Correct = %c)\n",
                            questions[r], ansChar, answers[r]);
                }
            }

            printf("\nQuiz Over! Your Score: %d/%d\n", score, qcount);
            fprintf(fp, "Quiz completed. Score: %d/%d\n\n", score, qcount);

            fclose(fp);
        }

        // RANDOM JOKES1410'[]
        else if (choice == 2) {

            char jokes[10][200] = {
                "Why do programmers prefer dark mode?\nBecause light attracts bugs.",
                "Why was the JavaScript developer sad?\nBecause he didn’t Node how to Express himself!",
                "Why do C programmers always mix up Halloween and Christmas?\nBecause Oct 31 = Dec 25.",
                "Why don’t programmers like nature?\nIt has too many bugs.",
                "What do you call a programmer from Finland?\nNerdic.",
                "Why did the computer get cold?\nBecause it forgot to close Windows.",
                "Why was the computer late to work?\nIt had a hard drive.",
                "Why do programmers hate snakes?\nBecause they can't Python well.",
                "What is a programmer’s favourite hangout place?\nThe Foo Bar.",
                "Why did the function break up with the variable?\nBecause they had constant arguments."
            };

            int r = rand() % 10;

            printf("\n*** RANDOM JOKE ***\n");
            printf("%s\n", jokes[r]);
        }

        else if (choice == 3) {
            FILE *fp = fopen("quiz_results.txt", "a");
            if (fp == NULL) {
                printf("Error opening file for writing.\n");
                return 1;
            }

            int r = rand() % 10;
            char input[100];

            printf("\n*** RIDDLE ***\n");
            printf("%s\nYour answer: ", riddles[r]);

            if (fgets(input, sizeof(input), stdin) == NULL) {
                printf("Input error.\n");
                fclose(fp);
                continue;
            }

            size_t len = strcspn(input, "\n");
            input[len] = '\0';

            char lower[100];
            for (size_t i = 0; i <= len; i++)
                lower[i] = (char) tolower((unsigned char) input[i]);

            if (strcmp(lower, riddle_answers[r]) == 0) {
                printf("Correct Answer: %s\n", riddle_answers[r]);
                fprintf(fp, "Riddle: %s | User answered = %s -> Correct\n\n",
                        riddles[r], input);
            } else {
                printf("Correct Answer: %s\n", riddle_answers[r]);
                fprintf(fp, "Riddle: %s | User answered = %s -> Wrong (Answer = %s)\n\n",
                        riddles[r], input, riddle_answers[r]);
            }

            fclose(fp);
        }

        else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
