#include "Page.hpp"

Page::Page()
    : state_(PageState::FREE),
    lpn_(0) {}

bool Page::program(uint64_t lpn)
{
    if(state_ != PageState::FREE){
        return false;
    }

    lpn_ = lpn;
    state_ = PageState::VALID;
    return true;
}

void Page::invalidate()
{
    if(state_ == PageState::VALID){
        state_ = PageState::INVALID;
    }
}

void Page::erase()
{
    state_ = PageState::FREE;
    lpn_ = 0;
}

PageState Page::state() const{
    return state_;
}

uint64_t Page::lpn() const{
    return lpn_;
}