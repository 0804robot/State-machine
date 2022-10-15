#include <state_machine.h>

state_machine::state_machine(void)
{
    currentState = RobotState::idle;
}
RobotState state_machine::getCurrentState(void)
{
    return currentState;
}

void state_machine::transition(void)
{
    currentState = robotTransitions[currentState];
}

std::map<RobotState, RobotState> robotTransitions = {
	{RobotState::idle, RobotState::line_following},
	{RobotState::line_following, RobotState::obstacle_avoidance},
	{RobotState::obstacle_avoidance, RobotState::stop_and_go},
	{RobotState::stop_and_go, RobotState::maze},
	{RobotState::maze, RobotState::celebrarion}
};