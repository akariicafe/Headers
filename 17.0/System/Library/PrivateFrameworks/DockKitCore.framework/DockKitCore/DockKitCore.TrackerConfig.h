@interface DockKitCore.TrackerConfig : NSObject {
    void /* unknown type, empty encoding */ yawVelocityMultiplier;
    void /* unknown type, empty encoding */ pitchVelocityMultiplier;
    void /* unknown type, empty encoding */ useDeadbands;
    void /* unknown type, empty encoding */ pidConfig;
    void /* unknown type, empty encoding */ predPidConfig;
    void /* unknown type, empty encoding */ nightStandMode;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ MAX_FACE_SEARCH_TIME;
    void /* unknown type, empty encoding */ RETURN_TO_CENTER_MIN_TIME;
    void /* unknown type, empty encoding */ RETURN_TO_CENTER_MAX_DURATION;
    void /* unknown type, empty encoding */ MIN_TIME_TO_CLEAR_TRACKING_SELECTION;
    void /* unknown type, empty encoding */ TRACKING_LEFT;
    void /* unknown type, empty encoding */ TRACKING_RIGHT;
    void /* unknown type, empty encoding */ NOT_TRACKING;
    void /* unknown type, empty encoding */ YAW_MULTIPLIER;
    void /* unknown type, empty encoding */ PITCH_MULTIPLIER;
    void /* unknown type, empty encoding */ OVERLAP_THRESHOLD;
    void /* unknown type, empty encoding */ usePIDParamsFromARDF;
    void /* unknown type, empty encoding */ CAMERA_STATIONARY_SPEED;
    void /* unknown type, empty encoding */ SUBJECT_POS_PREDICTION_HORIZON;
}

- (id)init;
- (void).cxx_destruct;

@end
