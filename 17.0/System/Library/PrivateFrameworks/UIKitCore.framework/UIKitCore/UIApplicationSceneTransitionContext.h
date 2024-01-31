@class NSDictionary, UISClickAttribution, UISPasteSharingToken;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (nonatomic, getter=_lifecycleActionType, setter=_setLifecycleActionType:) unsigned long long lifecycleActionType;
@property (retain, nonatomic) NSDictionary *payload;
@property (nonatomic) BOOL forTesting;
@property (nonatomic) BOOL safeMode;
@property (nonatomic) double userLaunchEventTime;
@property (nonatomic) double execTime;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic) BOOL shouldTakeKeyboardFocus;
@property (nonatomic) BOOL waitForBackgroundTaskCompletion;
@property (retain, nonatomic) UISClickAttribution *clickAttribution;
@property (retain, nonatomic) UISPasteSharingToken *pasteSharingToken;
@property (nonatomic) long long statusBarAnimation;
@property (nonatomic) BOOL disableTouchCancellationOnRotation;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (BOOL)isUISubclass;

@end
