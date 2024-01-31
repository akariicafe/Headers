@class BKSAccelerometer, NSTimer;

@interface UIMotionEvent : UIEvent {
    BKSAccelerometer *_motionAccelerometer;
    long long _subtype;
    long long _stateMachineState;
    double _shakeStartTime;
    double _lastMovementTime;
    double _highLevelTime;
    double _lowEndTimeout;
    NSTimer *_idleTimer;
    BOOL _sentMotionBegan;
    float _lowPassState[10];
    unsigned long long _lowPassStateIndex;
    unsigned long long _highPassStateIndex;
    float _highPassState[2];
    int notifyToken;
}

@property (nonatomic) int shakeState;

- (void)_sendEventToResponder:(id)a0;
- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (float)_lowPass:(float)a0;
- (void)_updateAccelerometerEnabled;
- (void)dealloc;
- (long long)subtype;
- (float)_determineShakeLevelX:(float)a0 y:(float)a1 z:(float)a2 currentState:(long long)a3;
- (void)_enablePeakDetectionIfNecessary;
- (id)_init;
- (void)_willResume;
- (float)_highPass:(float)a0;
- (BOOL)_isDetectingMotionEvents;
- (long long)_feedStateMachine:(float)a0 currentState:(long long)a1 timestamp:(double)a2;
- (id)description;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)a0;
- (void)_resetLowPassState;
- (void)_enablePeakDetectionForScreenBlanked:(id)a0;
- (void).cxx_destruct;
- (int)_shakeState;
- (BOOL)_detectWhenNotActive;
- (id)_windows;
- (void)_idleTimerFired;
- (void)_setSubtype:(long long)a0;
- (long long)type;
- (void)_willSuspend;

@end
