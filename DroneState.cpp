#include "DroneState.h"
#include <iostream>

void DroneState::update(double dt)
{
    position_.x_ += velocity_.vx_ * dt;
    position_.y_ += velocity_.vy_ * dt;
    position_.z_ += velocity_.vz_ * dt;
    timestamp_ += dt;
}

void DroneState::print()
{
    std::cout << "Position: (" << position_.x_ << ", " << position_.y_ << ", " << position_.z_ << ")\n";
    std::cout << "Velocity: (" << velocity_.vx_ << ", " << velocity_.vy_ << ", " << velocity_.vz_ << ")\n";
    std::cout << "Attitude: (" << attitude_.roll_ << ", " << attitude_.pitch_ << ", " << attitude_.yaw_ << ")\n";
    std::cout << "Timestamp: " << timestamp_ << "\n";
}

void DroneState::setPosition(double x, double y, double z)
{
    position_.x_ = x;
    position_.y_ = y;
    position_.z_ = z;
}

void DroneState::setVelocity(double vx, double vy, double vz)
{
    velocity_.vx_ = vx;
    velocity_.vy_ = vy;
    velocity_.vz_ = vz;
}

void DroneState::setAttitude(double roll, double pitch, double yaw)
{
    attitude_.roll_ = roll;
    attitude_.pitch_ = pitch;
    attitude_.yaw_ = yaw;
}