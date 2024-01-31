@class NSString, CBDisplayContaineriOS, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

@interface CBSliderCommitTelemetry : CBModule <CBContainerModuleProtocol, CBAODProtocol> {
    CBDisplayContaineriOS *_displayContainer;
    struct TrackedState { BOOL darkThemeApplied; BOOL landscapeOrientation; BOOL autobrightnessEnabled; BOOL ecoModeEnabled; } _state;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    struct array<CBSliderCommitInfo, 100UL> { struct CBSliderCommitInfo { long long timestamp; long long localTimestamp; int trustedLux; float frontLux; float rearLux; BOOL rearLuxInUse; float nits; float slider; float apce; float delayedAPCE; int delayedAPCEStatus; BOOL autobrightnessEnabled; BOOL ecoModeEnabled; float ecoModeFactor; struct CBAABParams { float e0a; float e0b; float e1; float e2; float l0a; float l0b; float l1; float l2; float thirdSlope; } aabParams; BOOL aabParamsUpdateOnly; BOOL cpmsMitigationLimitingBrightness; BOOL touchMitigationTriggered; BOOL proxMitigationTriggered; float auroraFactor; float edrHeadroom; float colorAdaptationStrength; int colorAdaptationMode; BOOL darkThemeApplied; BOOL landscapeOrientation; } __elems_[100]; } _entryBuffer;
    unsigned long long _bufferIndex;
    unsigned long long _bufferEntriesFilled;
    long long _delayedAPCEDelay;
    struct CBAABParams { float e0a; float e0b; float e1; float e2; float l0a; float l0b; float l1; float l2; float thirdSlope; } _lastAABParams;
    NSObject<OS_os_log> *_bufferLogHandle;
    struct __IOMobileFramebuffer { } *_iomfb;
    NSObject<OS_dispatch_source> *_delayedAPCETimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sliderInfoToNSDictionary:(const struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; float x19; float x20; float x21; int x22; BOOL x23; BOOL x24; } *)a0;

- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)handleAODStateUpdate:(unsigned long long)a0 transitionTime:(float)a1 context:(id)a2;
- (void)start;
- (id).cxx_construct;
- (void)stop;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (float)getAPCE;
- (struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; float x19; float x20; float x21; int x22; BOOL x23; BOOL x24; } *)addOrUpdateEntryWithTimestamp:(long long)a0 slider:(float)a1 apce:(float)a2 andTrackedState:(struct TrackedState { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a3;
- (void)cancelDelayedAPCETimer;
- (void)delayedAPCETimerHandler:(struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; float x19; float x20; float x21; int x22; BOOL x23; BOOL x24; } *)a0;
- (void)fillEntry:(struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; float x19; float x20; float x21; int x22; BOOL x23; BOOL x24; } *)a0 withTimestamp:(long long)a1 andAABParams:(struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *)a2;
- (void)fillEntry:(struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; float x19; float x20; float x21; int x22; BOOL x23; BOOL x24; } *)a0 withTimestamp:(long long)a1 slider:(float)a2 apce:(float)a3 andTrackedState:(struct TrackedState { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a4;
- (struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; float x19; float x20; float x21; int x22; BOOL x23; BOOL x24; } *)getLastFilledEntry;
- (struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; float x19; float x20; float x21; int x22; BOOL x23; BOOL x24; } *)getNextEntryAndAdvanceBufferIndex;
- (BOOL)getUserAABParams:(struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *)a0;
- (id)initWithQueue:(id)a0 andDisplayContainer:(id)a1;
- (void)logAfterUserBrightnessCommitWithTimestamp:(long long)a0 slider:(float)a1 apce:(float)a2 andTrackedState:(struct TrackedState { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a3;
- (void)logAllFilledEntries;
- (void)reportCommit:(struct CBSliderCommitInfo { long long x0; long long x1; int x2; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; int x10; BOOL x11; BOOL x12; float x13; struct CBAABParams { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; float x19; float x20; float x21; int x22; BOOL x23; BOOL x24; } *)a0;

@end
