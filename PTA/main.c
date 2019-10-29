#include <stdio.h>

int main(){
    int n,x;
    int odd=0,even=0;//奇数与偶数
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&x);
        if(x % 2 != 0){
            odd++;
        }else{
            even++;
        }
    }
    printf("%d %d",odd,even);
    return 0;
}

————————————————
版权声明：本文为CSDN博主「晔清呀!!」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/kounid/article/details/79433219
