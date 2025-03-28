void fibonacciSeries(int n){
    int first = 0, second = 1, next;
    if(n==1){
        printf("0");
    }
    else if(n==2){
        printf("0 1");
    }
    else{
        printf("0 1 ");
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
    }
}