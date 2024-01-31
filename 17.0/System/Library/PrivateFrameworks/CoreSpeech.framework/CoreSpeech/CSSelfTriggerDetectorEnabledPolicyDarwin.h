@class CSPolicy;

@interface CSSelfTriggerDetectorEnabledPolicyDarwin : CSPolicy

@property (retain, nonatomic) CSPolicy *voiceTriggerEnabledPolicy;

- (id)init;
- (void)_subscribeEventMonitors;
- (void).cxx_destruct;
- (void)_addSelfTriggerDetectorEnabledConditions;
- (BOOL)_shouldEnableMyriadFriendlySelfTrigger;

@end
