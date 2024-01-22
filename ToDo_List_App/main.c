#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//

/*
To-Do List App
This is a simple application that will allow the following
1. Create Task
2. Edit Task
3. Remove Task
4. Mark Task as Complete
*/

// struct Task
// {
//     char *task; // represents the string task
//     int completed; // 1 = true, 0 = false
// };

typedef struct
{
    char *task; // represents the string task
    int completed; // 1 = true, 0 = false
} Task;

struct Task *tasks = NULL; // why NULL?
int length = 0; // why? list starts with 0 tasks...this is the length of the list

void listTasks() {

}

void addTasks(const char *task) {
    tasks = (struct Task *) realloc(tasks, (length + 1) * sizeof(Task));

}

void editTasks() {

}

void deleteTasks() {

}

void markCompleted() {

}


int main()
{
    time_t current_time;

    current_time = time(NULL);



    return 0;
}

