@class NSDate, RPCompanionLinkDevice, NSArray, NSString, NSMutableDictionary, RPCompanionLinkClient, NSObject, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source, ANRapportConnectionDelegate;

@interface ANRapportConnection : NSObject <ANRapportConnectionProvider>

@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rapportQueue;
@property (retain) NSMutableDictionary *clients;
@property (retain) NSArray *activeDevices;
@property (retain) NSDate *lastScanStartTimestamp;
@property (readonly, nonatomic) NSMapTable *deviceDelegatesToQueues;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL isTimerSuspended;
@property (weak, nonatomic) id<ANRapportConnectionDelegate> delegate;
@property (readonly, nonatomic) RPCompanionLinkDevice *localDevice;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (void)_cancelTimer;
- (void)_incrementMessageCountForCompanionLinkClient:(id)a0;
- (void)_registerMessageRequestHandler;
- (id)init;
- (void)_setupLink:(id /* block */)a0;
- (void)_executeBlockForDelegates:(id /* block */)a0;
- (double)_remainingScanTimeInterval;
- (void)_sendDailyRequest:(id)a0 handler:(id /* block */)a1;
- (void)_simulateDeliveryFailureForMessage:(id)a0;
- (void)activateLinkWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_registerHandlers;
- (void)sendHomeLocationStatusRequestToDevice:(id)a0 handler:(id /* block */)a1;
- (void)registerDailyRequest:(id /* block */)a0;
- (void)_sendMessage:(id)a0 linkClient:(id)a1 handler:(id /* block */)a2;
- (void)_decrementMessageCountForCompanionLinkClient:(id)a0;
- (void)_tearDownLink;
- (void)_linkForDevice:(id)a0 handler:(id /* block */)a1;
- (void)addDeviceDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)_handleLinkInvalidation;
- (void)deactivateLinkWithOptions:(unsigned long long)a0;
- (void)_updateDevices;
- (void)_handleTimerExpired;
- (void)_sendHomeLocationStatusRequestToDevice:(id)a0 handler:(id /* block */)a1;
- (void)_registerHomeLocationStatusRequestHandler;
- (void)sendDailyRequest:(id)a0 handler:(id /* block */)a1;
- (id)activateLinkWithOptions:(unsigned long long)a0;
- (BOOL)_needsScan;
- (void)_notifyDeviceDelegatesConnectionDidFindDevice:(id)a0;
- (id)sendMessage:(id)a0 device:(id)a1 responseHandler:(id /* block */)a2;
- (void)_startTimer;
- (void)_notifyDeviceDelegatesConnectionDidLoseDevice:(id)a0;

@end
