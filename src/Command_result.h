#ifndef COMMAND_RESULT_H_
#define COMMAND_RESULT_H_

#include "ICommand_result.h"
#include "IState_checker.h"

#include <string>

class Command_result : public ICommand_result
{
public:
    Command_result(const std::string& service_name, IState_checker* checker) :
        service_name_(service_name), state_checker_(checker) {}

    bool is_done() override
    {
        return state_checker_->get_state(service_name_) == "running";
    }

private:
    std::string service_name_;
    IState_checker* state_checker_;
};

#endif // COMMAND_RESULT_H_
