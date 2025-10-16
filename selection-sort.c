#include <stdio.h>
int main(){
    int a[] = {9,8,4,6,3,0,1};
    int length = sizeof(a)/ sizeof(a[0]);
    for (int i = 0 ; i < length -1 ;i++){
        int minPos = i ;
        for ( int j = i+1;j<length ; j++ )
            if (a[j]>a[minPos]) minPos = j;
        int temp = a[i];
        a[i] = a[minPos];
        a[minPos] = temp;
    }
    for (int i=0;i<length;i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}