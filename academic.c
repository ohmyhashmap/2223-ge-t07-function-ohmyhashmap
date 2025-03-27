// NIM - Name
// NIM - Name

#include "academic.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *grade_to_text(enum grade_t _grade) { return NULL; }

float calculate_performance(enum grade_t _grade, unsigned short _credit)
{
    // t07, write your code here

    return 0.0;
}

void print_course(struct course_t _course)
{
    // t07, write your code here
}

void print_student(struct student_t _student)
{
    // t07, write your code here
}

void print_enrollment(struct enrollment_t _enrollment)
{
    // t07, write your code here
}

struct course_t create_course(char *_code, char *_name, unsigned short _credit,
                              enum grade_t _passing_grade)
{
    struct course_t crs;

    // t07, write your code here

    return crs;
}

struct student_t create_student(char *_id, char *_name, char *_year,
                                char *_study_program)
{
    struct student_t std;

    // t07, write your code here

    return std;
}

struct enrollment_t create_enrollment(struct course_t _course,
                                      struct student_t _student, char *_year,
                                      enum semester_t _semester)
{
    struct enrollment_t emt;

    // t07, write your code here

    return emt;
}
