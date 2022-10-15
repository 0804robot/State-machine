#include <state_machine.h>

state_machine::state_machine(void) {
    currentState = RobotState::idle;
}
RobotState state_machine::getCurrentState(void) {
    return currentState;
}

void state_machine::transition(void) {
    currentState = robotTransitions[currentState];
}