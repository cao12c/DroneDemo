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
    Position position_;
    Velocity velocity_;
    Attitude attitude_;

  public:
    DroneState()
        : timestamp_(0.0), position_ {0.0, 0.0, 0.0}, velocity_ {0.0, 0.0, 0.0},
          attitude_ {0.0, 0.0, 0.0}
    {
    }
    void update(double dt);
    void print();
    void setPosition(double x, double y, double z);
    void setVelocity(double x, double y, double z);
    void setAttitude(double roll, double pitch, double yaw);
    void getPostion(double& x, double& y, double& z) const;
    void getVelocity(double& vx, double& vy, double& vz) const;
    void getAttitude(double& roll, double& pitch, double& yaw) const;   
    void getTimestamp(double& timestamp) const;
};