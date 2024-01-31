@interface DockKitCore.PIDController : NSObject {
    void /* unknown type, empty encoding */ kp;
    void /* unknown type, empty encoding */ ki;
    void /* unknown type, empty encoding */ kd;
    void /* unknown type, empty encoding */ kv;
    void /* unknown type, empty encoding */ pError;
    void /* unknown type, empty encoding */ iError;
    void /* unknown type, empty encoding */ dError;
    void /* unknown type, empty encoding */ integralLimit;
    void /* unknown type, empty encoding */ previousError;
    void /* unknown type, empty encoding */ smoothedError;
    void /* unknown type, empty encoding */ clampIntegralZero;
    void /* unknown type, empty encoding */ rateControl;
    void /* unknown type, empty encoding */ clampIntegralThres;
    void /* unknown type, empty encoding */ clampDerivativeThres;
    void /* unknown type, empty encoding */ derivativeErrorSmoothing;
    void /* unknown type, empty encoding */ stateSize;
}

- (id)init;
- (void).cxx_destruct;

@end
