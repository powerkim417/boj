#include <iostream>

using namespace std;

int main(void){
    int n,m;
    cin>>n>>m;
    // n>=m 인 경우는 하나를 통째로 나눠주면 되므로
    // 진분수 형태로 바꾸도록 한다.
    n %= m;
    // 이제 n<m

    /* 3, 5라고 하면
    길이 3의 이어진 소시지를 5등분해서 가져간다.(3/5=0.6)
    즉, 0.6 1.2 1.8 2.4 에서 칼질을 하게 되므로 4가 답.
    한편, 3, 6이라고 하면
    길이 3의 이어진 소시지를 6등분해서 가져가는데,(3/6=0.5)
    0.5 1 1.5 2 2.5 에서 칼질을 해야 하나 1, 2는 이미 칼질이 되어있다고 보므로
    답은 3이 된다.
    이렇게 iteration을 돌리되, n*i/m 값이 정수가 아닐 때마다 카운트를 하면 됨
    */
    int cnt = 0;
    for (int i=1 ; i<m ; i++){
        if (n*i % m != 0) cnt++;
    }
    cout<<cnt;
    return 0;
}