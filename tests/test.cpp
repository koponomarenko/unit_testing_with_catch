#define CATCH_CONFIG_MAIN

#include "Command_result.h"
#include "State_checker.h"

#include "catch.hpp"

class Mock_state_checker : public IState_checker
{
public:
    Mock_state_checker(const std::string state) : state_(state) {}

    std::string get_state(const std::string& /* service_name */) override
    {
        return state_;
    }

private:
    std::string state_;
};


TEST_CASE("If state is 'running', command_result shold return true")
{
    Mock_state_checker state_checker("running");
    std::string service_name{"my_cool_service"};

    Command_result command_result(service_name, &state_checker);

    REQUIRE(command_result.is_done() == true);
}

TEST_CASE("If state is not 'running', command_result shold return false")
{
    Mock_state_checker state_checker("");
    std::string service_name{"my_cool_service"};

    Command_result command_result(service_name, &state_checker);

    REQUIRE(command_result.is_done() == false);
}
