#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H
#include <robot_states.h>
class state_machine
{
private:
    RobotState currentState;
public:
    state_machine(void);
    void transition(void);
    RobotState getCurrentState(void);
    //inline RobotState getCurrentState() const { return currentState; }
};

#endif