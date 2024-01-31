@class RBSProcessMonitor, NSString, FBServiceClientAuthenticator, NSMutableArray, BSMutableIntegerMap, SBSystemServiceServer;

@interface SBHardwareButtonService : NSObject <SBSystemServiceServerHardwareButtonDelegate> {
    SBSystemServiceServer *_systemServiceServer;
    FBServiceClientAuthenticator *_serviceClientHomeHardwareButtonHintSuppressionEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientEventConsumerEntitlement;
    RBSProcessMonitor *_processMonitor;
    NSMutableArray *_observers;
    BSMutableIntegerMap *_eventMaskPerKind;
}

@property (retain, nonatomic) BSMutableIntegerMap *registrationsByButtonKind;
@property (retain, nonatomic) BSMutableIntegerMap *clientsByPID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)consumeHeadsetPlayPauseSinglePressDownWithPriority:(long long)a0 continuation:(out id /* block */ *)a1;
- (BOOL)hasConsumersForLockButtonDoublePressUp;
- (id)init;
- (BOOL)consumeHomeButtonSinglePressUpWithPriority:(long long)a0;
- (void)_removeRegistration:(id)a0 fromClient:(id)a1;
- (id)_init;
- (id)_applicationForClientInfo:(id)a0;
- (BOOL)consumeVolumeDecreaseButtonSinglePressUpWithPriority:(long long)a0;
- (BOOL)_sendEvent:(long long)a0 buttonKind:(long long)a1 withPriority:(long long)a2;
- (void)_updateAllButtonEventMasks;
- (void)_performButtonRegistrationChangeAndNotifyObservers:(id /* block */)a0;
- (BOOL)consumeVolumeDecreaseButtonSinglePressDownWithPriority:(long long)a0 continuation:(out id /* block */ *)a1;
- (BOOL)consumeLockButtonSinglePressUpWithPriority:(long long)a0;
- (void)_process:(id)a0 stateDidUpdate:(id)a1;
- (BOOL)hasConsumersForHomeButtonPresses;
- (id)_registrationsForButtonKind:(long long)a0;
- (BOOL)consumeLockButtonDoublePressUpWithPriority:(long long)a0;
- (BOOL)consumeLockButtonLongPressWithPriority:(long long)a0;
- (void)_reconfigureProcessMonitorForPredicates:(id)a0;
- (void)_updateEventMasksForButtonKind:(long long)a0;
- (void)systemServiceServer:(id)a0 client:(id)a1 setEventMask:(unsigned long long)a2 buttonKind:(long long)a3 priority:(long long)a4;
- (BOOL)hasConsumersForLockButtonPresses;
- (void).cxx_destruct;
- (void)systemServiceServer:(id)a0 clientDidDisconnect:(id)a1;
- (void)systemServiceServer:(id)a0 client:(id)a1 requestsHIDEvents:(BOOL)a2 token:(id)a3 forButtonKind:(long long)a4;
- (BOOL)consumeRingerSwitchToggleStateOnWithPriority:(long long)a0;
- (id)_initWithSystemServiceServer:(id)a0;
- (void)_setSystemServiceClient:(id)a0 buttonKind:(long long)a1 eventMask:(unsigned long long)a2 priority:(long long)a3;
- (BOOL)consumeRingerSwitchToggleStateOffWithPriority:(long long)a0;
- (void)systemServiceServer:(id)a0 client:(id)a1 acquireAssertionOfType:(long long)a2 forReason:(id)a3 withCompletion:(id /* block */)a4;
- (BOOL)consumeHomeButtonLongPressWithPriority:(long long)a0;
- (BOOL)consumeHomeButtonTriplePressUpWithPriority:(long long)a0;
- (id)_mutableRegistrationsForButtonKind:(long long)a0;
- (void)systemServiceServer:(id)a0 client:(id)a1 fetchHapticTypeForButtonKind:(long long)a2 completion:(id /* block */)a3;
- (void)_reconfigureProcessMonitor;
- (id)addObserver:(id)a0;
- (BOOL)consumeVolumeIncreaseButtonSinglePressUpWithPriority:(long long)a0;
- (BOOL)hasConsumersForHomeButtonSinglePress;
- (BOOL)_sendEvent:(long long)a0 buttonKind:(long long)a1 withPriority:(long long)a2 continuation:(out id /* block */ *)a3;
- (BOOL)consumeVolumeIncreaseButtonSinglePressDownWithPriority:(long long)a0 continuation:(out id /* block */ *)a1;
- (id)_mutableRegistrationsForButtonKind:(long long)a0 createIfNecessary:(BOOL)a1;
- (BOOL)consumeHeadsetPlayPauseSinglePressUpWithPriority:(long long)a0;
- (void)systemServiceServer:(id)a0 client:(id)a1 setHapticType:(long long)a2 buttonKind:(long long)a3;
- (void)_sendXPCMessageForEvent:(long long)a0 buttonKind:(long long)a1 priority:(long long)a2 toClient:(id)a3;
- (void)_addRegistration:(id)a0 toClient:(id)a1;
- (BOOL)consumeHomeButtonDoublePressDownWithPriority:(long long)a0;

@end
