@class SOSButtonPressState, NSMapTable, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface SOSManager : NSObject <SOSInternalClientProtocol, SOSClientProtocol> {
    BOOL _sendingLocationUpdate;
    long long _sosInitiationState;
    long long _sosInteractiveState;
    SOSButtonPressState *_sosButtonPressState;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int connectionRequestNotificationToken;
@property (readonly, nonatomic) NSMapTable *observerToQueue;
@property (nonatomic, getter=isAutomaticCallCountdownEnabled) BOOL automaticCallCountdownEnabled;
@property (nonatomic, getter=isAllowedToMessageSOSContacts) BOOL allowedToMessageSOSContacts;
@property (nonatomic) long long currentSOSInitiationState;
@property (nonatomic) long long currentSOSInteractiveState;
@property (copy, nonatomic) SOSButtonPressState *currentSOSButtonPressState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)triggerSOSWithCompletion:(id /* block */)a0;
+ (void)triggerSOS;
+ (BOOL)shouldTriggerSOS;
+ (void)triggerSOSWithUUID:(id)a0 completion:(id /* block */)a1;
+ (void)notifySOSTriggerMechanismChanged;
+ (BOOL)deviceSupportsSOS;
+ (void)triggerSOSWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;

- (void)didDismissSOSBeforeSOSCall:(long long)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (id)init;
- (BOOL)longPressTriggersEmergencySOS;
- (void)dealloc;
- (void)_resetStateWithCompletion:(id /* block */)a0;
- (void)dismissClientSOSWithCompletion:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (void)mostRecentLocationSentWithCompletion:(id /* block */)a0;
- (void)dismissSOSWithCompletion:(id /* block */)a0;
- (void)stopSendingLocationUpdate;
- (void)setSendingLocationUpdate:(BOOL)a0;
- (void)didUpdateSOSStatus:(id)a0;
- (void)_waitForInitialState;
- (void)startSendingLocationUpdateForReason:(long long)a0 withCompletion:(id /* block */)a1;
- (void)updateClientCurrentSOSInteractiveState:(long long)a0;
- (void)updateClientCurrentSOSButtonPressState:(id)a0;
- (void).cxx_destruct;
- (void)didDismissClientSOSBeforeSOSCall:(long long)a0;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)a0;
- (void)updateClientCurrentSOSInitiationState:(long long)a0;
- (void)setLongPressTriggersEmergencySOS:(BOOL)a0;
- (void)willStartSendingLocationUpdate;
- (BOOL)isSendingLocationUpdate;

@end
