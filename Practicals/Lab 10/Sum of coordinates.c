#include<stdio.h>

struct position{
    int x;
    int y;
};

void get_pos(struct position *p){
    printf("Enter coordinate x : "); scanf("%i", &p->x);
    printf("Enter coordinate y : "); scanf("%i", &p->y);
}


int main(){

    struct position p1;
    printf("Enter first position\n");
    get_pos(&p1);

    struct position p2;
    printf("Enter Second position\n");
    get_pos(&p2);

    printf("Sum of x coordinates : %i\n", p1.x+p2.x);
    printf("Sum of y coordinates : %i\n", p1.y+p2.y);

    

}