@class UIWindow, NSString, UILabel, UIView;

@interface _UIMotionAttitudeAnalyzer : _UIMotionAnalyzer <_UISettingsKeyObserver> {
    double _smoothingDegree;
    double _referenceShiftSpeed;
    double _distanceMultiplier;
    BOOL _hasReferenceQuaternion;
    union _GLKQuaternion { struct { float x; float y; float z; float w; } ; struct { union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } v; float s; } ; float q[4]; } _referenceQuaternion;
    union _GLKQuaternion { struct { float x; float y; float z; float w; } ; struct { union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } v; float s; } ; float q[4]; } _absoluteQuaternion;
    double _lastUpdate;
    double _idleStartTime;
    struct UIOffset { double horizontal; double vertical; } _idleStartOffset;
    double _jumpThreshold;
    double _idleLeeway;
    double _secondsBeforeIdle;
    double _lockValue;
    double _lockStrength;
    UIWindow *_diagnosticsWindow;
    UILabel *_idleIndicator;
    UIView *_horizontalLockIndicator;
    UIView *_verticalLockIndicator;
    BOOL _hasHistory;
    struct UIOffset { double horizontal; double vertical; } _lastAppliedViewerOffset;
    union _GLKQuaternion { struct { float x; float y; float z; float w; } ; struct { union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } v; float s; } ; float q[4]; } _lastAppliedRelativeQuaternion;
    BOOL _isApplyingHysteresis;
    union _GLKQuaternion { struct { float x; float y; float z; float w; } ; struct { union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } v; float s; } ; float q[4]; } _relativeQuaternionOnHysteresisEntry;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)dealloc;
- (void)_updateIdleStateForRawOffset:(struct UIOffset { double x0; double x1; })a0 timestamp:(double)a1;
- (BOOL)_isIdleGivenTimestamp:(double)a0;
- (double)_directionLockStrength;
- (void)_updateSettings;
- (void)_createIdleIndicator;
- (void)_updateSmoothedOffsetForRawOffset:(struct UIOffset { double x0; double x1; })a0;
- (BOOL)applyHysteresisWithReceivedEventTimestamp:(double)a0 timeSinceLastNewMotionEvent:(double)a1 slowUpdatesEnabled:(BOOL)a2 returningShouldToggleSlowUpdates:(BOOL *)a3 logger:(id)a4;
- (struct UIOffset { double x0; double x1; })_currentRawOffset:(union _GLKQuaternion { struct { float x0; float x1; float x2; float x3; } x0; struct { union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; } x0; float x1; } x1; float x2[4]; })a0;
- (void)updateHistory;
- (union _GLKQuaternion { struct { float x0; float x1; float x2; float x3; } x0; struct { union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; } x0; float x1; } x1; float x2[4]; })_relativeQuaternion;
- (void)updateWithEvent:(id)a0;
- (void)_tearDownDirectionLockIndicators;
- (BOOL)_shouldSuspendApplicationForHysteresisGivenNewViewerOffset:(struct UIOffset { double x0; double x1; })a0 wasSuspendingApplicationForHysteresis:(BOOL)a1;
- (void)resetHysteresis;
- (void)_tearDownDiagnosticsWindow;
- (void)_showIdleUI:(BOOL)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_shiftReferenceToYieldRelativeQuaternion:(union _GLKQuaternion { struct { float x0; float x1; float x2; float x3; } x0; struct { union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; } x0; float x1; } x1; float x2[4]; })a0;
- (void)_createDirectionLockIndicators;
- (void)_updateDirectionalLockIndicators;
- (void)_createDiagnosticsWindow;
- (void)_tearDownIdleIndicator;
- (void)_updateAcceleratedOutputRangeFixingOffset:(struct UIOffset { double x0; double x1; })a0;
- (id)initWithSettings:(id)a0;
- (long long)_directionLockStatus;
- (void)_updateReferenceAttitude:(union _GLKQuaternion { struct { float x0; float x1; float x2; float x3; } x0; struct { union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; } x0; float x1; } x1; float x2[4]; })a0 timestamp:(double)a1;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)a0;
- (void)_resetDirectionalLockWithViewerOffset:(struct UIOffset { double x0; double x1; })a0;

@end
