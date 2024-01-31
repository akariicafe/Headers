@class NSDictionary;

@interface PGCommand : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) long long systemAction;
@property (readonly, nonatomic) long long faceTimeAction;
@property (readonly, nonatomic) long long playbackAction;
@property (readonly, nonatomic) BOOL associatedBoolValue;
@property (readonly, nonatomic) long long associatedIntegerValue;
@property (readonly, nonatomic) double associatedDoubleValue;
@property (readonly, nonatomic) long long testingAction;

+ (id)commandForBeginInterruption;
+ (id)commandForCancelPIP;
+ (id)commandForEndInterruptionWithShouldResumeSuggestion:(BOOL)a0;
+ (id)commandForEndOrLeaveActivityRequested;
+ (id)commandForFaceTimeAction:(long long)a0;
+ (id)commandForFaceTimeAction:(long long)a0 associatedBoolValue:(BOOL)a1;
+ (id)commandForFaceTimeAction:(long long)a0 associatedIntegerValue:(long long)a1;
+ (id)commandForInvalidateFromProxy;
+ (id)commandForMenuItemSelected:(long long)a0;
+ (id)commandForPlaybackAction:(long long)a0;
+ (id)commandForPlaybackAction:(long long)a0 associatedBoolValue:(BOOL)a1;
+ (id)commandForPlaybackAction:(long long)a0 associatedDoubleValue:(double)a1;
+ (id)commandForRestoreFromPIP;
+ (id)commandForSendActionButtonTapped;
+ (id)commandForSetCameraEnabled:(BOOL)a0;
+ (id)commandForSetMicrophoneMuted:(BOOL)a0;
+ (id)commandForSetMuted:(BOOL)a0;
+ (id)commandForSetPlaying:(BOOL)a0;
+ (id)commandForSetSuspended:(BOOL)a0;
+ (id)commandForShowHUD;
+ (id)commandForSkipByInterval:(double)a0;
+ (id)commandForSkipPreroll;
+ (id)commandForSkipToLive;
+ (id)commandForStartPIP;
+ (id)commandForSwitchCamera;
+ (id)commandForSystemAction:(long long)a0;
+ (id)commandForTestStartPIP;
+ (id)commandForTestingAction:(long long)a0;
+ (id)commandForToggleControlsVisibility;
+ (id)commandForToggleZoom;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (void)appendDescriptionForKey:(long long)a0 value:(id)a1 toBuilder:(id)a2;

@end
