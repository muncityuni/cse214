#include<stdio.h>
void print_array(int a[], int size);
int main(){
    int a[10] = {1, 2, 3, 4, 5}, max_size = 10, size = 5;
    int key, i, index;
    print_array(a, size);

    while(scanf("%d", &key)==1){
        if(size==0){
            printf("Array Underflow\n");
            break;
        }else{
            index = -1;
            for(i=0; i<size; i++){
                if(key == a[i]){
                    index = i;
                    break;
                }
            }
            if(index==-1){
                printf("Value Not Found\n");
            }
            else{
                for(i=index; i<size-1; i++){
                    a[i] = a[i+1];
                }
                size--;
            }
        }
        print_array(a, size);
    }
    return 0;
}

void print_array(int a[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
