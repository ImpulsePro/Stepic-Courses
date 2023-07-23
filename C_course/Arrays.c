#include <stdio.h>
/*Дано натуральное число  n<1000, далее n целых чисел.Напечатать сначала четные числа. На следующей строке напечатать нечетные числа.


#define N 1000

int main(){
    int a[N];           // массив для N чисел
    int i;              // номер текущей ячейки
    int n;              // сколько чисел дано

    scanf("%d", &n);
    // читаем n чисел в массив a
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    // печатаем числа
    for(i=0; i<n; i++) {
        if(a[i]%2==0)
        printf("%d ", a[i]);
    }
    printf("\n");
    // печатаем числа еще раз
    for(i=0; i<n; i++) {
        if(a[i]%2!=0)
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#define N 1000
int main(){
    int a[N];           // массив для N чисел
    int i;              // номер текущей ячейки
    int n;              // сколько чисел дано

    scanf("%d", &n);
    // читаем n чисел в массив a
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    // печатаем числа
    for(i=n; i > =0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}*/

//Написать программу, которая в заданной последовательности чисел ищет встречается ли заданное число k.//


/*#include <stdio.h>

#define SIZE 1000

int main (){
    int k;
    int i;
    int arr[SIZE];
    int n;

    scanf("%d",&n);
    for( i = 0 ; i < n ;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);
    int index = search(arr,n,k);
    printf("%d",index);
    
}

int search (int arr[SIZE],int n, int k){
    for( int i = 0 ; i <= n; i++){       
      if(arr[i]==k){
        return i;
      }
    }
    return -1;
}*/