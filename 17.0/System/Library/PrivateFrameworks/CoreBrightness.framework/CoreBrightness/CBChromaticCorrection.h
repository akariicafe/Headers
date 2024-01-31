@class NSString, CBChromaticCorrectionParams, NSObject, CBLuxBezierRamp;
@protocol CBChromaticCorrectionPolicy, OS_os_log;

@interface CBChromaticCorrection : CBModule <CBContainerModuleProtocol, CBAODProtocol> {
    BOOL _isEnabled;
    BOOL _autoBrightnessIsEnabled;
    id<CBChromaticCorrectionPolicy> _policy;
    CBLuxBezierRamp *_ramp;
    NSObject<OS_os_log> *_log;
    float _trustedLux;
    BOOL _aodIsOn;
    BOOL _aodRampHandoffPending;
}

@property (readonly) CBChromaticCorrectionParams *params;
@property float nits;
@property void /* function */ *currentTime;
@property (readonly) float aodRampDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (void)dealloc;
- (BOOL)handleAODStateUpdate:(unsigned long long)a0 transitionTime:(float)a1 context:(id)a2;
- (void)start;
- (void)stop;
- (BOOL)isEnabled;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (float)lux;
- (void)setLux:(float)a0;
- (BOOL)isInActiveRange;
- (float)currentStrength;
- (void)handleLuxUpdate:(float)a0;
- (void)handleRampResult:(int)a0;
- (id)initWithBacklightParams:(id)a0 andPolicy:(id)a1;
- (float)luxAdjustedByInternalPolicies:(float)a0;
- (BOOL)nitsAreInActiveRange:(float)a0;
- (BOOL)rampIsRunning;
- (BOOL)shouldRampForIncomingLux:(float)a0;
- (BOOL)shouldRampFromStartLux:(float)a0 toTargetLux:(float)a1;
- (float)targetLux;
- (void)updateRamp;
- (void)updateRampWithProgress:(float)a0;

@end
