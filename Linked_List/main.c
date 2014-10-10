#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};
void add_node(struct node* list, int data)
{
struct node* temp;
temp=list;
struct node* new_node;
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=data;
new_node->next=NULL;
while(temp->next!=NULL)
{
	temp=temp->next;
}
	temp->next=new_node;
}

void print_nodes(struct node* list)
{
	struct node* temp;
	temp=list;
printf("\n*************START OF LIST*****************\n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;	
}
printf("\n*************END OF LIST*****************\n");
}
int main(int argc, char *argv[]) {

struct node *list;
list=(struct node*)malloc(sizeof(struct node));
list->data=7;
list->next=NULL;
print_nodes(list);
add_node(list,9);
add_node(list,6);
print_nodes(list);
add_node(list,5);
print_nodes(list);
	return 0;
}

