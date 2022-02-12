#include <stdio.h>
#include <stdlib.h>
 
struct list{
  int data;
  struct list* next;
};

struct list *listHead = NULL;

void printList() {
  struct list *ptr = listHead;
  printf("\n[ ");
	
  //start from the beginning
  while(ptr != NULL) {
    printf("(%d) ",ptr->data);
    ptr = ptr->next;
  }
  printf(" ]");
}
//insere no inicio
void insere(int data){
  struct list *list = (struct list*) malloc(sizeof(struct list));
  list->data=data;
  listHead=list;
}

void insereNoFim(int data){
  struct list *ptr = listHead;
  while( ptr->next != NULL){
    ptr = ptr->next;
  }
  struct list *node = (struct list*) malloc(sizeof(struct list));
  node->data = data;
  ptr->next  = node;
}

int main(){
  int inteiro = 20;
  int segundoValor = 30;
  insere(inteiro);
  insereNoFim(segundoValor);

  printList(); 
  return 0;
}
