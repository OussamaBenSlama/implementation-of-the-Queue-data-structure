#include <stdio.h>
#include <stdlib.h>
#include"file.h"

int main()
{
    struct file f ;
    int i = 0 ;
    create(&f) ;

    if(isEmpty(f)) printf("Raw el file fer8a \n") ;

    for(i=0 ; i<5 ; i++)
    {
        addData(&f, i) ;  /* 3melt boucle w 7atit fel file numbers men 0 lel 4 */
    }


        printf("hedh awel 3dad 7atitou welli houwa :  %d\n",first(f)) ;
        removeData(&f) ;
        printf("hedha theni 3dad ama taw hou lowel be3d mafas5t el ken lowel : %d\n",first(f)) ;
        removeData(&f) ;
        printf("hedha 3eme %d\n",first(f)) ;
        removeData(&f) ;
        printf("hedha 4eme %d\n",first(f)) ;
        removeData(&f) ;
        printf("hedha 5eme %d\n",first(f)) ;
        removeData(&f) ;
        /* taw el file roj3et  fer8a */
        if(isEmpty(f)) printf("Raw el file fer8a \n") ;





    return 0;
}
