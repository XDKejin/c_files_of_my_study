/*
 * use simple array to implement List
 * can't solve the length of array;!!!!
 * */
#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX 200
int get_size();
int insert(int x, int index);
int delete(int index);
int find(int x);
void print();
int make_null();

const int list[MAX];
const int len;

int main()
{
	

	scanf("",&);
	
	printf("\n");
	return 0;

}
int get_size(){
	for(int i = 0; i <= MAX; i++){
		if(list[i] == '\0')
			return i;
	}
	return 0;
}

int insert(int x, int index){
	if(index > get_size()+1){
		printf("the index value out of round!!!\n");
		return 0;	
	}
	for(int i = get_size(); i > index; i--){
		list[i] = list[i-1];
	}
	list[index] = x;
	return 1;
}

int delete(int index){
	if(index > get_size()){
		printf("the index value is wrong!!!\n");
		return 0;	
	}

	int i;

	for(i = index; i < get_size()-1; i++){
		list[i] = list[i+1];
	}
	list[i] = null;
	return 1;
}

/*
 *	only return the index of first element been find;
 * */
int find(int x){
	for(int i = 0; i < get_size(); i++){
		if(list[i] == x){
			return i;
		}
	}

	printf("there is no element x in list!!\n");
	return 0;

}
void print(){
	for(int i = 0; i < get_size(); i++){
		printf("%d  ",list[i]);
		
	}
	printf("\n");

}
int make_null(){
	for(int i = 0; i < get_size(); i++)
		list[i] = null;


}

