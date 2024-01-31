@class CSPolicy;

@interface CSSelfTriggerDetectorUseAudioTapEnabledPolicyIOS : CSPolicy

@property (retain, nonatomic) CSPolicy *voiceTriggerEnabledPolicy;

- (id)init;
- (void)_subscribeEventMonitors;
- (void).cxx_destruct;
- (void)_addSelfTriggerDetectorEnabledConditions;
- (BOOL)_deviceSupportMyriadFriendlySelfTrigger;
- (BOOL)_isSpeakerActive;
- (BOOL)_shouldEnableMyriadFriendlySelfTrigger;

@end
