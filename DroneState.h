#pragma once
class DroneState
{
  private:
    struct Position
    {
        double x_;
        double y_;
        double z_;
    };
    struct Velocity
    {
        double vx_;
        double vy_;
        double vz_;
    };
    struct Attitude
    {
        double roll_;
        double pitch_;
        double yaw_;
    };
    double timestamp_;

  public:
    void update(double dt);
    void print();
};