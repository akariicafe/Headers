@interface DockKitCore.FramingEngine : NSObject {
    void /* unknown type, empty encoding */ MIN_TIME_BETWEEN_FRAMING;
    void /* unknown type, empty encoding */ MIN_TIME_BETWEEN_FRAMING_WHITEBOARDMODE;
    void /* unknown type, empty encoding */ SMART_FRAMING_ACCELERATION;
    void /* unknown type, empty encoding */ SMART_FRAMING_HZ;
    void /* unknown type, empty encoding */ REFRAME_CENTER_TIMEOUT;
    void /* unknown type, empty encoding */ REFRAME_CENTER_TIMEOUT_MULTI;
    void /* unknown type, empty encoding */ REFRAME_SIDE_TIMEOUT;
    void /* unknown type, empty encoding */ REFRAME_CENTER_TIMEOUT_SINGLE_ESCAPE;
    void /* unknown type, empty encoding */ framingChangeSemaphore;
    void /* unknown type, empty encoding */ currentHorizontalFraming;
    void /* unknown type, empty encoding */ currentVerticalFraming;
    void /* unknown type, empty encoding */ currentOrientation;
    void /* unknown type, empty encoding */ trackingMetrics;
    void /* unknown type, empty encoding */ minDeltaToFrame;
    void /* unknown type, empty encoding */ framingMode;
    void /* unknown type, empty encoding */ configSemaphore;
    void /* unknown type, empty encoding */ smartFramingEnabled;
    void /* unknown type, empty encoding */ lastReframeDate;
    void /* unknown type, empty encoding */ currentMinCutTime;
    void /* unknown type, empty encoding */ lastCloseToCamera;
    void /* unknown type, empty encoding */ lastNumTracks;
    void /* unknown type, empty encoding */ roi;
    void /* unknown type, empty encoding */ widthInflation;
    void /* unknown type, empty encoding */ heightInflation;
    void /* unknown type, empty encoding */ framingQueue;
    void /* unknown type, empty encoding */ framingTimer;
    void /* unknown type, empty encoding */ deadbandSemaphore;
    void /* unknown type, empty encoding */ deadband;
    void /* unknown type, empty encoding */ targetDeadband;
    void /* unknown type, empty encoding */ currentObservationType;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ _horizontalMargins;
    void /* unknown type, empty encoding */ _horizontalMargins_singleSubject;
    void /* unknown type, empty encoding */ _horizontalExtremes;
    void /* unknown type, empty encoding */ _verticalExtremes;
    void /* unknown type, empty encoding */ _verticalMargins;
    void /* unknown type, empty encoding */ minROISize;
    void /* unknown type, empty encoding */ nearThreshold;
    void /* unknown type, empty encoding */ nearLimits;
    void /* unknown type, empty encoding */ midLimits;
    void /* unknown type, empty encoding */ farLimits;
    void /* unknown type, empty encoding */ horizontalMargins;
    void /* unknown type, empty encoding */ horizontalMarginsSingleSubject;
    void /* unknown type, empty encoding */ horizontalExtremes;
    void /* unknown type, empty encoding */ verticalMargins;
    void /* unknown type, empty encoding */ verticalExtremes;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
