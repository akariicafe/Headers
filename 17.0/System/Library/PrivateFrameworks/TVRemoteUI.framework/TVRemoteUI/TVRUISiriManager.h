@class SiriActivationAssertion;
@protocol _TVRUIEventDelegate;

@interface TVRUISiriManager : NSObject <SiriActivationButtonEventListenerDelegate>

@property (retain, nonatomic) SiriActivationAssertion *siriAssertion;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonActionsDelegate;

+ (id)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)buttonEventListenerDidReceiveButtonDownWithButtonIdentifier:(long long)a0 atTimestamp:(double)a1;
- (void)buttonEventListenerDidReceiveButtonLongPressWithButtonIdentifier:(long long)a0 atTimestamp:(double)a1;
- (void)buttonEventListenerDidReceiveButtonUpWithButtonIdentifier:(long long)a0 atTimestamp:(double)a1;
- (void)_activateSiriAssertion;
- (void)_donateTipsTrigger;
- (void)_registerForSiriButtonEvents;
- (void)_releaseSiriAssertion;
- (void)_unregisterForSiriButtonEvents;
- (void)registerForSiriEvents;
- (void)unregisterForSiriEvents;

@end
