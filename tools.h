#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} node;

node *create_random_linked_list(int size) {
  if (size > 15) {
    printf("Error: Size cannot be greater than 15.\n");
    return NULL;
  }

  node *head = NULL;
  node *current = NULL;

  for (int i = 0; i < size; i++) {
    node *new_node = (node*)calloc(1, sizeof(node));
    new_node->data = rand() % 100;
    new_node->next = NULL;

    if (head == NULL) {
      head = new_node;
      current = new_node;
    } else {
      current->next = new_node;
      current = new_node;
    }
  }

  return head;
}
