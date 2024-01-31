@class SBSOSDefaults, NSString, SOSManager, NSMutableSet, SBMainWorkspace, NSMutableDictionary, BSAbsoluteMachTimer;
@protocol SBSOSClawGestureObserverDelegate;

@interface SBSOSClawGestureObserver : NSObject <SOSManagerClientObserver, SBVolumePressBandit> {
    SOSManager *_sosManager;
    SBMainWorkspace *_workspace;
    NSMutableDictionary *_activePressTypeToDownTimestamp;
}

@property (retain, nonatomic) NSMutableSet *activePressTypes;
@property (readonly, nonatomic, getter=_isSOSActivated) BOOL sosActivated;
@property (retain, nonatomic, setter=_setSOSDefaults:) SBSOSDefaults *sosDefaults;
@property (retain, nonatomic) BSAbsoluteMachTimer *sosTriggerTimer;
@property (nonatomic, getter=_wasSOSTriggeredByClaw, setter=_setWasSOSTriggeredByClaw:) BOOL wasSOSTiggeredByClaw;
@property (readonly, nonatomic, getter=_isClawGestureActive) BOOL clawGestureActive;
@property (readonly, nonatomic, getter=_isAutomaticCallCountdownEnabled) BOOL autoCallCountdownEnabled;
@property (nonatomic, getter=isGestureLoggingEnabled) BOOL gestureLoggingEnabled;
@property (nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) BOOL sosEnabled;
@property (weak, nonatomic) id<SBSOSClawGestureObserverDelegate> delegate;
@property (readonly, nonatomic, getter=isClawActivated) BOOL clawActivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)handleVolumeDecrease;
- (void)_cancelSOSActivity;
- (void)_presentSOSInterface;
- (void)noteButtonPress:(long long)a0 isDown:(BOOL)a1;
- (void)handleVolumeIncrease;
- (id)_initWithSOSManager:(id)a0 workspace:(id)a1;
- (void)didUpdateCurrentSOSInitiationState:(long long)a0;
- (void).cxx_destruct;
- (void)noteGestureReset;
- (id)_currentSOSButtonPressState;
- (void)_updateActivePressesForPressType:(long long)a0 down:(BOOL)a1 timestamp:(double)a2;

@end
