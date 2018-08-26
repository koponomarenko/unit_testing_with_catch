#include "Command_result.h"
#include "State_checker.h"

#include <string>

int main()
{
    State_checker state_checker;
    std::string service_name{"my_cool_service"}; // assume I want to start this service ...

    // let's say the service was started here ...

    // now I want to check the result - if the services started successfully.
    Command_result command_result(service_name, &state_checker);
}
