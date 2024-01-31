@class HCXPCMessage, NSArray, NSDictionary, NSString, AXDispatchTimer, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AXHeardController : NSObject <HCHeardControllerProtocol, UNUserNotificationCenterDelegate> {
    AXDispatchTimer *_transparencyHysteresisTimer;
    AXDispatchTimer *_shutdownTimer;
    BOOL _shouldShutdown;
    NSObject<OS_xpc_object> *_service;
    BOOL _finishedSetup;
    BOOL _bluetoothReady;
}

@property (retain, nonatomic) NSArray *clients;
@property (retain, nonatomic) NSDictionary *handlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *personalAudioQueue;
@property (retain, nonatomic) HCXPCMessage *boostMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;
+ (id)entitlementsForMessageID:(unsigned long long)a0;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)dealloc;
- (void)startServer;
- (void).cxx_destruct;
- (BOOL)sendMessage:(id)a0 withError:(id *)a1;
- (void)handleNewConnection:(id)a0;
- (id)boostPriority:(id)a0;
- (void)continueSetup;
- (void)bluetoothAvailabilityDidChange:(id)a0;
- (void)updateAnalytics;
- (void)_setShutdownTimer;
- (void)_shouldBeRunning:(id /* block */)a0;
- (void)_shutdownIfPossible;
- (void)addHandler:(id)a0 andBlock:(id /* block */)a1 forMessageIdentifier:(unsigned long long)a2;
- (BOOL)connection:(id)a0 hasEntitlementForMessage:(unsigned long long)a1;
- (unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)a0;
- (void)handleMessage:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)registerFakeClient:(id)a0;
- (void)sendClientsMessageWithPayload:(id)a0 excluding:(id)a1;
- (void)sendUpdateMessage:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)shutdownIfPossible;
- (void)updateHearingControlCenterModule;
- (void)updatePersonalAudioSettingsOnAccessories;

@end
