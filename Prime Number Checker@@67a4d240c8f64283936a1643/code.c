int isPrime(int num){
    int flag=1;
    if(num<=1){
        flag=0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            flag =0;
        }
    }
    return flag;
}
