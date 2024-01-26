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

Task *my_tasks = NULL; 
int length = 0;

void addTask(const char *task) {
    my_tasks = (struct Task *) realloc(my_tasks, (length + 1) * sizeof(Task));
    my_tasks[length].task = (char *)malloc(strlen(task) + 1);
    my_tasks[length].completed = 0;

    strcpy(my_tasks[length].task, task);
    length++;
    printf("Task added...");

}

void listTask() {
    char status;
    for(int i = 0; i < length; i++) {
        if (my_tasks[i].completed == 1 ) {
            status = 'd';
        } else {
            status = 'n';
        }

        printf("%d. %s [%c] \n", i + 1, my_tasks[i].task, status);
    }
}

void editmy_tasks() {

}

void deletemy_tasks(int index) {
    if (index <= length && index > 0) {
        index = index - 1;
        free(my_tasks[index].task);
        for (int i = 0; i < length - 1; i++)
        // When one task is deleted, it creates a gap. We need to remove that gap...hence 'length - 1' is used
        // a b c d e ---> a b d e (if c was deleted)
        {
            
        }
        
        printf("Task deleted...");
    } else {
        printf("Invalid index...");

}

void markCompleted(int index) {
    if (index <= length && index > 0) {
        my_tasks[index - 1].completed = 1; // true
        printf("Task marked as completed...");
    } else {
        printf("Invalid index...");
    }

}


int main()
{
    switch ()
    {
    case 1:
        // Add task
        
        break;
    
    default:
        break;
    }

    return 0;
}

