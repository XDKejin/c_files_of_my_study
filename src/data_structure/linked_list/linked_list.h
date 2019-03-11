typedef int element_type;

typedef struct node *node_ptr;

struct node{
	element_type element;
	node_ptr next;

};

/*
 *	this definition is ok;
 *
typedef struct node{
	element_type element;
	node_ptr next;
} node_ptr;


*/
typedef node_ptr LIST;
typedef node_ptr position;


int is_empty(LIST L);

int is_last(position p ,LIST L);


/*
 *	return position of x in L;
 *	NULL if not found
 * */
position find(element_type x, LIST L);

position find_previous(element_type x, LIST L);


/*
 *	delete from a list .
 *	to by p->next is wiped out
 *
 * */
void delete(element_type x, LIST L);


/*
 *	insert a element after legal position p;
 *	assume use header node;
 * */
void insert( element_type x, LIST L, position p);


position next( element_type x, LIST L);
		

position previous(element_type x, LIST L);


void list_print(LIST L);
