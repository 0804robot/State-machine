#ifndef ROBOT_STATES_H
#define ROBOT_STATES_H
#pragma once
#if defined(ESP32) 
	#include <map>
#else
	#include <map>
#endif

enum class RobotState {
	idle,
	line_following,
	obstacle_avoidance,
	stop_and_go,
	maze,
	celebrarion
};

extern std::map<RobotState, RobotState> robotTransitions;


#endif 