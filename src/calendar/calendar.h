#ifndef CALENDAR_H
#define CALENDAR_H

typedef struct {

    int tutor_id;
    int student_id;
    /* Times in seconds after 2000? */
    int start_time;
    int stop_time;

} cal_entry;


typedef struct calendar_binary_tree_node {

    cal_entry *entry;
    struct calendar_binary_tree_node *left;
    struct calendar_binary_tree_node *right;

} cal_node;


typedef struct {

    cal_node *root;

} calendar;

#endif /* CALENDAR_H */
