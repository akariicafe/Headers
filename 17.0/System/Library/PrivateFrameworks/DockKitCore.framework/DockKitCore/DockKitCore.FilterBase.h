@interface DockKitCore.FilterBase : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ stateSemaphore;
    void /* unknown type, empty encoding */ stateIndex;
    void /* unknown type, empty encoding */ controlIndex;
    void /* unknown type, empty encoding */ initialized;
    void /* unknown type, empty encoding */ lastMeasurementTime;
    void /* unknown type, empty encoding */ predictedState;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ latestCorrectedState;
    void /* unknown type, empty encoding */ latestCorrectionTime;
    void /* unknown type, empty encoding */ covarianceEpsilon;
    void /* unknown type, empty encoding */ estimateErrorCovariance;
    void /* unknown type, empty encoding */ identity_;
    void /* unknown type, empty encoding */ processNoiseCovariance;
    void /* unknown type, empty encoding */ transferFunction;
    void /* unknown type, empty encoding */ transferFunctionJacobian;
    void /* unknown type, empty encoding */ filterState_;
    void /* unknown type, empty encoding */ motionModel_;
    void /* unknown type, empty encoding */ controlUpdateVector_;
    void /* unknown type, empty encoding */ controlTimeout_;
    void /* unknown type, empty encoding */ latestControl_;
    void /* unknown type, empty encoding */ latestControlTime_;
    void /* unknown type, empty encoding */ controlAcceleration_;
    void /* unknown type, empty encoding */ accelerationGains_;
    void /* unknown type, empty encoding */ accelerationLimits_;
    void /* unknown type, empty encoding */ decelerationGains_;
    void /* unknown type, empty encoding */ decelerationLimits_;
    void /* unknown type, empty encoding */ maxCovariance;
    void /* unknown type, empty encoding */ isSaturated;
}

@end
