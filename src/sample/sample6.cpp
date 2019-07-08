#include <iostream>

int callback(int x){
    return(x + 1);
}
//第二引数 : 返り値(ポインタ変数名)(引数の型)
int sum( int x, int (*func)(int) ){
    return func( x );
}

int main( void ){
    int ans = sum( 5.0, callback );
    std::cout << "ans = " << ans << std::endl;
    return 0;
}
