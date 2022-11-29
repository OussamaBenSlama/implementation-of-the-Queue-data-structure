#include<stdio.h>
#include<malloc.h>
#include<assert.h>
#include"file.h"

void create ( struct file *f) /* el fonction elli t5allik ta3mel creation lel file mte3ek */
{
    f->head = NULL ;
    f->tail = NULL ;
}

int isEmpty( struct file f) /* el fonction tchouf biha est que el file vide ou non */
{
    return (f.head == NULL && f.tail == NULL) ;
}

int first (struct file f) /* hedhi traje3 awel element fel file */
{
    assert(!isEmpty(f)) ;
    /* el assert hedhi fct predefinie si te5ou valeur true ( 1 en c ) t5alik tkamel te3mel be9i traitement
    w si 3titha 0 (false) ttal3lek "assertion failed" bech enti ta3ref enou 3melt 8alta */
    return (f.head->data) ;
}


void addData(struct file *f , int x) /* fct bech tzid elet fel file dima nzidou melle5er */
{
    struct node *p ;
    p = (struct node *)malloc(sizeof(struct node)) ; /* allocation dynamique */
    p->data = x ;
    if(isEmpty(*f)) /* si lfile fer8a donc head w tail yepointou 3la nafs el element */
    {
        f->head = p ;
        f->tail = p ;
    }
    else
    {
        f->tail->next = p ;
        f->tail = p ;
    }
}

void removeData(struct file *f) /* fct bech tremovi element fel file nfas5ou awel element d5al yaani f head */
{
    assert(!isEmpty(*f)) ;
    struct node *tmp ;
    tmp = f->head ;
    if(f->head== f->tail) /* hedhi ta3ni si fel file fema elemnt wa7ed donc be3d manfas5ouh el file tarja3 vide */
    {
        f->head = NULL ;
        f->tail = NULL ;
    }
    else {
        f->head = tmp->next ;
        free(tmp ) ; /* free opposite of malloc lezem na7i el objet mel memoirre */
    }

}
