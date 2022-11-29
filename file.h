#include<stdio.h>
#include<malloc.h>
#include<assert.h>

struct node /* 3mel structure te3 l'element mta3na */
{
    int data ; /* el element fih zouz 7ajet : key wen nal9a el valeur mtee3i w pointeur 3al next element */
    struct node *next ;
}  ;
struct file /* el file mte3na fiha 2 pointeurs men type node bech we7ed yepointi 3al awel element w le5er 3la a5er element */
{
    struct node *head ;
    struct node *tail ;
} ;


/* hedhom definition ta3 fonction mte3na sans implementation lezem n7outouhem hekeka */
void create( struct file *) ;
int isEmpty( struct file) ;
int first ( struct file) ;
void addData (struct file * , int ) ;
void removeData( struct file*) ;
