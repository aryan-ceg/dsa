#include<stdio.h>
int  main( )
{
int  a[]={56,8,32,92,2}, b[]={56,6,3,97,100}, mergeArray[10], i, j, k=1, temp ;

for (  i = 0 ; i < 10 ; i++)
{
    if (  i < 5 )
        mergeArray[i] = a[i] ;
    else
    {
        mergeArray[i] = b[k] ;
        k = k+1 ;
    }
}

for (  i = 0 ; i < 10 ; i++)
    {
        for (  j = 0 ; j < 10 ; j++)
        {
            if (  mergeArray[i] <= mergeArray[j] )
            {
                temp = mergeArray[i] ;
                mergeArray[i] = mergeArray[j] ;
                mergeArray[j] = temp ;
            }
        }
    }
printf("\n Element of array after merging and sorting :\n") ;
for (  i = 0 ; i <10 ; i++)
    printf("%d ",mergeArray[i]) ;
return ( 0 ) ;
}
