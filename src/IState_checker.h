#ifndef ISTATE_CHECKER_H_
#define ISTATE_CHECKER_H_

#include <string>

class IState_checker
{
public:
    virtual ~IState_checker() = default;
    virtual std::string get_state(const std::string& service_name) = 0;
};

#endif // ISTATE_CHECKER_H_
