@class NSUserDefaults, SWSystemActivityAssertion, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface CBAODState : NSObject {
    NSUserDefaults *_defaults;
    NSObject<OS_os_log> *_logHandle;
    SWSystemActivityAssertion *_systemActivityAssertion;
}

@property unsigned long long AODState;
@property unsigned long long AODStateExternal;
@property (nonatomic) BOOL enableAODLiveON;
@property (nonatomic) BOOL isAODSupported;
@property (readonly) NSMutableArray *thresholdsLuxBuckets;
@property (readonly) NSMutableArray *thresholdsDeltaPBrightenBuckets;
@property (readonly) NSMutableArray *thresholdsDeltaPDimBuckets;
@property (readonly) NSMutableArray *thresholdsAPLuxBuckets;
@property (readonly) NSMutableArray *thresholdsAPDeltaPBrightenBuckets;
@property (readonly) NSMutableArray *thresholdsAPDeltaPDimBuckets;
@property (readonly) float thresholdPCCLuxDelta;
@property float pullALSUpdatePeriod;
@property float nitsCap;
@property (readonly) struct { float _E[20]; float _L[20]; int size; } curve;
@property (readonly) struct { float _E[20]; float _L[20]; int size; } darkerCurve;
@property (readonly) float maxAODNits;
@property (readonly) float minAODNits;
@property float whitepointTransitionLength;
@property float whitepointTransitionLengthLowLux;
@property float whitepointTransitionLengthLuxThreshold;
@property float whitepointDeltaThreshold;
@property unsigned long long AODTransitionProfile;
@property float AODTransitionProfileEaseInOut_K;
@property float AODTransitionProfileSpring_mass;
@property float AODTransitionProfileSpring_velocity;
@property float AODTransitionProfileSpring_damping;
@property float AODTransitionProfileSpring_stiffness;
@property float AODTransitionTargetAlgoOptimised_dimmingThreshold;

+ (id)sharedInstance;

- (id)copyNumberFromPrefsForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isAODActive;
- (BOOL)handleAODDarkerCurveUpdate:(id)a0;
- (void)logAODCurve:(struct { float x0[20]; float x1[20]; int x2; })a0 name:(id)a1;
- (BOOL)handleAODCurveUpdate:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (char *)AODStateString;
- (void)acquirePowerAssertion;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)releasePowerAssertion;
- (void)checkDefaultsConfiguration;
- (void)checkBootArgsConfiguration;

@end
