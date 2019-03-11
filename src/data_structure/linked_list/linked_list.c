#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

/*
typedef struct node *node_ptr;

struct node{
	element_type element;
	node_ptr next;

};
*/
/*
 *	this definition is ok;
 *
typedef struct node{
	element_type element;
	node_ptr next;
} node_ptr;


*/

/*
typedef node_ptr LIST;
typedef node_ptr position;
*/

int is_empty(LIST L){
	return (L -> next == NULL);

}


int is_last(position p ,LIST L){
	return (p -> next == NULL);

}


/*
 *	return position of x in L;
 *	NULL if not found
 * */
position find(element_type x, LIST L){
	position p;
	p = L -> next;

	while( (p != NULL) && (p -> element != x))
		p = p -> next;

	return p;
}
position find_previous(element_type x, LIST L){
	position p, tmp_cell;
	p = L;

	while( (p != NULL) && (p -> element != x)){
		tmp_cell = p;
		p = p -> next;
	}
	return tmp_cell;


}
/*
 *	delete from a list .
 *	to by p->next is wiped out
 *
 * */
void delete(element_type x, LIST L){
	position p,tmp_cell;
	p = find_previous( x, L );
	if( p -> next != NULL){
		tmp_cell =  p -> next;
		p -> next = tmp_cell -> next;
		free(tmp_cell);
	}

}
/*
 *	insert a element after legal position p;
 *	assume use header node;
 * */
void insert( element_type x, LIST L, position p){
	position tmp_cell;

	tmp_cell = (position)malloc( sizeof(struct node) );	//create a space for tmp_cell;
	if( tmp_cell == NULL )
		perror("out of space!");			//test the space;

	tmp_cell = p -> next;
	p -> next -> element = x;
	p -> next -> next = tmp_cell;


}


position next( element_type x, LIST L){
	position p;
	p = L;

	while( (p != NULL) && (p -> next -> element != x))
		p = p -> next;
	
	return (p -> next -> next);
		
}

position previous(element_type x, LIST L){
	position p;
	p = L;

	while( (p != NULL) && (p -> next -> element != x))
		p = p -> next;
	
	return p;

}

void list_print(LIST L){
	position p;
	p = L;
	while( (p != NULL) && (p -> next != NULL)){
		p = p -> next;
		printf("%d ",p -> element);
	
	}
}
