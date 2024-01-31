@class NSString, NSSet;

@interface BKSMutableHIDUISensorMode : BKSHIDUISensorMode

@property (nonatomic) BOOL estimatedProximityMode;
@property (nonatomic) long long versionedPID;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long changeSource;
@property (nonatomic) int proximityDetectionMode;
@property (nonatomic) long long displayState;
@property (nonatomic) BOOL postEventWithCurrentDetectionMask;
@property (nonatomic) BOOL digitizerEnabled;
@property (nonatomic) BOOL pocketTouchesExpected;
@property (nonatomic) BOOL tapToWakeEnabled;
@property (nonatomic) BOOL coverGestureEnabled;
@property (nonatomic) BOOL alwaysOnGesturesEnabled;
@property (nonatomic) BOOL wakeOnSwipeEnabled;
@property (nonatomic) BOOL wakeOnLongPressEnabled;
@property (nonatomic) BOOL wakeOnTapThroughEnabled;
@property (nonatomic) BOOL wakeOnSwipeThroughEnabled;
@property (nonatomic) BOOL wakeOnLongPressThroughEnabled;
@property (copy, nonatomic) NSSet *multitouchHostStateKeys;

- (void)setChangeSource:(unsigned long long)a0;
- (id)initWithReason:(id)a0;
- (void)setProximityDetectionMode:(int)a0;
- (void)setVersionedPID:(long long)a0;
- (void)setDigitizerEnabled:(BOOL)a0;
- (void)setWakeOnLongTapThroughEnabled:(BOOL)a0;
- (void)setDisplayState:(long long)a0;
- (void)setTapToWakeEnabled:(BOOL)a0;
- (void)setMultitouchHostStateKeys:(id)a0;
- (void)setPocketTouchesExpected:(BOOL)a0;
- (void)setEstimatedProximityMode:(BOOL)a0;
- (void)setCoverGestureEnabled:(BOOL)a0;
- (void)setWakeOnLongPressEnabled:(BOOL)a0;
- (void)setWakeOnSwipeThroughEnabled:(BOOL)a0;
- (void)setReason:(id)a0;
- (void)setWakeOnSwipeEnabled:(BOOL)a0;
- (void)setWakeOnTapThroughEnabled:(BOOL)a0;
- (void)_setSettingKey:(id)a0 enabled:(BOOL)a1;
- (void)setPostEventWithCurrentDetectionMask:(BOOL)a0;
- (void)setAlwaysOnGesturesEnabled:(BOOL)a0;

@end
