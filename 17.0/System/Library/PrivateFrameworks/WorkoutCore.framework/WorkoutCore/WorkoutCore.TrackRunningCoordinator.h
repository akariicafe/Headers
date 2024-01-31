@interface WorkoutCore.TrackRunningCoordinator : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ unitManager;
    void /* unknown type, empty encoding */ _trackModeEnabled;
    void /* unknown type, empty encoding */ _hasTrackUnitsOfMeasure;
    void /* unknown type, empty encoding */ _preferredUnit;
    void /* unknown type, empty encoding */ trackId;
}

@property (nonatomic) void /* unknown type, empty encoding */ canShowTrackPrompt;
@property (nonatomic) void /* unknown type, empty encoding */ didShowTrackPrompt;
@property (nonatomic) BOOL trackModeEnabled;

- (void)reset;
- (void)unitPreferencesDidChange;

@end
