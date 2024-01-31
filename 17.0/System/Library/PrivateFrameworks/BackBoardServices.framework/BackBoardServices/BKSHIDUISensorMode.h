@class NSString, NSSet;

@interface BKSHIDUISensorMode : NSObject <BSDescriptionStreamable> {
    NSString *_reason;
    long long _versionedPID;
    unsigned long long _changeSource;
    int _proximityDetectionMode;
    long long _displayState;
    BOOL _digitizerEnabled;
    BOOL _pocketTouchesExpected;
    BOOL _estimatedProximityMode;
    BOOL _postEventWithCurrentDetectionMask;
}

@property (readonly, nonatomic, getter=isRestrictedToSystemShell) BOOL restrictedToSystemShell;
@property (readonly, nonatomic) BOOL estimatedProximityMode;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long changeSource;
@property (readonly, nonatomic) BOOL postEventWithCurrentDetectionMask;
@property (readonly, nonatomic) int proximityDetectionMode;
@property (readonly, nonatomic) long long displayState;
@property (readonly, nonatomic) BOOL digitizerEnabled;
@property (readonly, nonatomic) BOOL pocketTouchesExpected;
@property (readonly, nonatomic) BOOL tapToWakeEnabled;
@property (readonly, nonatomic) BOOL coverGestureEnabled;
@property (readonly, nonatomic) BOOL alwaysOnGesturesEnabled;
@property (readonly, nonatomic) BOOL wakeOnSwipeEnabled;
@property (readonly, nonatomic) BOOL wakeOnLongPressEnabled;
@property (readonly, nonatomic) BOOL wakeOnTapThroughEnabled;
@property (readonly, nonatomic) BOOL wakeOnSwipeThroughEnabled;
@property (readonly, nonatomic) BOOL wakeOnLongPressThroughEnabled;
@property (readonly, copy, nonatomic) NSSet *multitouchHostStateKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)new;
+ (id)buildModeForReason:(id)a0 builder:(id /* block */)a1;
+ (id)_prevailingMode:(id)a0;

- (id)init;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)initForProtobufDecoding;
- (id)_initCopyFrom:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopy;
- (long long)_comparisonScore;
- (BOOL)_settingKeysAllowed:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEffectivelyEqualToMode:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
