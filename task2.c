#include <stdio.h>

int main() {
    int size = 4;
    int arr[4][4] = { {0, 0, 1, 0}, {1, 1, 1, 0}, {0, 0, 0, 1}, {1, 0, 0, 0} }; // հայտարարում ենք մատրիցը

    for(int i = 0; i < size; i++){
        
        int j = size - 1;
        for (int k = 0; k < size; k++)
        {
            int tmp = 0;
            if(arr[i][k] == arr[i][j]) { // համեմատում ենք զանգվածի առաջին և վերջին էլեմենտները
            j--;
        }
            else {
                tmp = arr[i][k];
                arr[i][k] = arr[i][j]; // swap ենք անում էլեմենտները
                arr[i][j] = tmp;
                break;
        } 
        }
        
    }

    for(int i = 0; i < size; i++) {

        printf("\n");
        for(int j = 0; j < size; j++){
            arr[i][j] = !arr[i][j]; // ինվերտ ենք անում
            printf("%d", arr[i][j]);
    }
}
}