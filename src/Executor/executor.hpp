#ifndef EXECUTOR_HPP
#define EXECUTOR_HPP

#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>

class Executor
{
public:
    Executor();
    static std::string execute(const char* cmd);
};

#endif // EXECUTOR_HPP
