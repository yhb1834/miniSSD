#include <iostream>
#include "Page.hpp"

int main(){
    std::cout << "Mini SSD started" << std::endl;

    Page page;

    if(page.state() == PageState::FREE){
        std::cout << "Page is FREE" << std::endl;
        page.program(10);
    }

    std::cout << page.lpn() << std::endl;

    std::cout << page.program(20) << std::endl;

    page.invalidate();
    page.program(30);

    std::cout << page.lpn() << std::endl;

    page.erase();

    page.program(40);

    std::cout << page.lpn() << std::endl;

    return 0;
}