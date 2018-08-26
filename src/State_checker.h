#ifndef STATE_CHECKER_H_
#define STATE_CHECKER_H_

#include "IState_checker.h"

class State_checker : public IState_checker
{
public:
    std::string get_state(const std::string& /* service_name */) override
    {
        // ideally some checking logic should be here.

        return "running"; // always running, no logic here ...
    }
};

#endif // STATE_CHECKER_H_
