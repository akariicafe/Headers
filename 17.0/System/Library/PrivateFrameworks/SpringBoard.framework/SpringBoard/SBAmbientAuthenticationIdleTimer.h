@class BSContinuousMachTimer, NSString, AWAttentionAwarenessClient, SBFMobileKeyBag;

@interface SBAmbientAuthenticationIdleTimer : NSObject <SBFMobileKeyBagObserver> {
    SBFMobileKeyBag *_keybag;
    long long _authenticated;
    double _lastAuthenticationTime;
    BSContinuousMachTimer *_authenticationLimitTimer;
    AWAttentionAwarenessClient *_attentionClient;
}

@property (nonatomic, getter=_isAuthenticated, setter=_setAuthenticated:) BOOL authenticated;
@property (nonatomic, getter=_isAttentionClientActive, setter=_setAttentionClientActive:) BOOL attentionClientActive;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double maximumAuthenticatedInterval;
@property (nonatomic) double idleTimerDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)keybag:(id)a0 extendedStateDidChange:(id)a1;
- (void).cxx_destruct;
- (void)_handleAttentionLost:(id)a0;
- (id)_initWithKeyBag:(id)a0 attentionAwarenessClient:(id)a1;
- (void)_recomputeAuthenticationLimitTimer;
- (void)_reconfigureAttentionClient;
- (void)_updateAttentionClientActive;

@end
