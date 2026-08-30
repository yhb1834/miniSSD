#pragma once

#include <cstdint>

enum class PageState {
    FREE,
    VALID,
    INVALID
};

class Page{
    public:
        Page();

        bool program(uint64_t lpn);
        void invalidate();
        void erase();

        PageState state() const;
        uint64_t lpn() const;

    private:
        PageState state_;
        uint64_t lpn_;


};