#include <stdio.h>
int add_sum(int val){
    static int sum=0;
    sum+=val;
    return sum;
    
}
int main(void) {
    int count;
    int result=0;
    
    scanf("%d",&count);
    /*入力した値が1未満または10より大きいときNGと表示する*/
    if(count<1||count>10){
        printf("NG");
        return 0;
        
    }
    /*1からcountまで繰り返し、偶数を順に加えていく*/
    for(int idx=1;idx<=count;idx++){
        result=add_sum(idx*2);
        
    }
    printf("%d",result);
    return 0;
    
}
