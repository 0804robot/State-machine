#ifndef ROBOT_STATES_H
#define ROBOT_STATES_H
#pragma once
#include <map>

enum class RobotState {
	idle,
	line_following,
	obstacle_avoidance,
	stop_and_go,
	maze,
	celebrarion
};

std::map<RobotState, RobotState> robotTransitions = {
	{RobotState::idle, RobotState::line_following},
	{RobotState::line_following, RobotState::obstacle_avoidance},
	{RobotState::obstacle_avoidance, RobotState::stop_and_go},
	{RobotState::stop_and_go, RobotState::maze},
	{RobotState::maze, RobotState::celebrarion}
};

#endif 