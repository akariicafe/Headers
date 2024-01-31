@class AWAttentionAwarenessClient, NSString, SBUIController, SBScreenSleepCoordinator, SBBacklightController, SBAmbientDefaults;

@interface SBAmbientWirelessChargingIdleTimer : NSObject <SBAmbientPresentationObserver, SBBacklightControllerObserver> {
    SBUIController *_uiController;
    SBScreenSleepCoordinator *_screenSleepCoordinator;
    SBBacklightController *_lazy_backlightController;
    AWAttentionAwarenessClient *_attentionClient;
    SBAmbientDefaults *_ambientTestingDefaults;
}

@property (nonatomic, getter=_ambientPresented, setter=_setAmbientPresented:) BOOL ambientPresented;
@property (nonatomic, getter=_isAttentionClientActive, setter=_setAttentionClientActive:) BOOL attentionClientActive;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backlightController:(id)a0 didTransitionToBacklightState:(long long)a1 source:(long long)a2;
- (void)ambientPresentationController:(id)a0 didUpdatePresented:(BOOL)a1;
- (id)_backlightController;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)_handleAttentionLost:(id)a0;
- (void)_noteQiPowerStatusChanged;
- (void)_noteSpringBoardBootComplete;
- (void)_reconfigureAttentionClient;
- (void)_updateIdleTimerEnablement;
- (id)initWithAmbientPresentationController:(id)a0 screenSleepCoordinator:(id)a1 uiController:(id)a2;

@end
