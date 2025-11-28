/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

typedef struct {
    char name[100];
    int roll_no;
    int marks;
} student;

int main() {
    student s[5];

    for (int i=0 ; i<5 ; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%d", &s[i].marks);
    }

    FILE *fp;

    fp= fopen("students.txt","w+");
    if (fp == NULL) {
        printf("Error in opening a file!");
        return 0;
    }
    for (int i=0 ; i<5 ; i++) {
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll_no, s[i].marks);
    }
    char lines[5];
    while (fgets(lines, 5 , fp)) {
        printf("%s",lines);
    }

    fclose(fp);
    return 0;
}