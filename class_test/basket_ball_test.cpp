#include <iostream>

void basket_test(){
    int catch_the_ball = 0;
    int is_yundao_lanxia = 0;
    int is_scored = 0;
    std::cin>>catch_the_ball;

    if(catch_the_ball == 1){
        // 皮皮抢到球了吗？0:没抢到 1:抢到了
        std::cin>>is_yundao_lanxia;
        
        if(is_yundao_lanxia == 1) {
        // 皮皮运球到篮下了吗？0:没运到 1:运到了

        std::cin>>is_scored;
        if(is_scored == 1) {
            // 球进筐了吗？0:没进 1:进了
            std::cout << "皮皮得分了！" << std::endl;

        } else {

            std::cout << "皮皮正在努力！" << std::endl;
        }

        } else {
            std::cout << "皮皮还在运球呢！" << std::endl;
        }

    } else {
        // 执行其他代码
        std::cout << "皮皮还没拿到球！" << std::endl;
    }
}