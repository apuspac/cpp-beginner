#include "all.h"

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};

    // 奇数の数: 5
    auto a = std::count_if( std::begin(v), std::end(v),
        [](auto x){ return x%2 == 1 ; } ) ;

    // 偶数の数: 1
    auto b = std::count_if( std::begin(v), std::end(v),
        [](auto x){ return x%2 == 0 ; } ) ;

    // 2以上の数: 3
    auto c = std::count_if( std::begin(v), std::end(v),
        [](auto x){ return x >= 2 ; } ) ;

    auto count_if = [](auto first, auto end, auto pred){
        auto counter = 0u;

        for(auto iter = first; iter != end; ++iter){
            if(pred(*iter) != false){
                counter++;
            }
        }
        return counter;
    };

    std::cout << count_if(v.begin(), v.end(), [](auto x){return x%2 == 1;});

}