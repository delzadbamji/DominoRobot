// Pinouts
#define PIN_ENABLE 52

#define PIN_ENCA_1 21
#define PIN_ENCA_2 20
#define PIN_ENCA_3 18
#define PIN_ENCA_4 19

#define PIN_ENCB_1 25
#define PIN_ENCB_2 24
#define PIN_ENCB_3 22
#define PIN_ENCB_4 23

#define PIN_DIR_1 39
#define PIN_DIR_2 13
#define PIN_DIR_3 12
#define PIN_DIR_4 37

#define PIN_PWM_1 5
#define PIN_PWM_2 6
#define PIN_PWM_3 7
#define PIN_PWM_4 4

// Constants
#define MAX_WHEEL_SPEED 1.0   // rad/s - current motor can only do about 1 rev/s under load
#define MAX_TRANS_SPEED 0.5  // m/s
#define MAX_ROT_SPEED 0.5      // rad/2

#define MAX_TRANS_ACC 0.5    // m/s^2
#define MAX_ROT_ACC   0.5      // rad/s^2

#define TRAJ_MAX_FRACTION 0.7  // Only generate a trajectory to this fraction of max speed to give motors headroom to compensate

#define WHEEL_DIAMETER 0.1016 // meters
#define WHEEL_DIST_FROM_CENTER 0.3548 // meters

#define FUDGE_FACTOR 0.55 // Fudgy scaling factor to use until I find where my actual scaling problem is. Scales how far the robot has actually moved when it thinks it has moved 1 meter
