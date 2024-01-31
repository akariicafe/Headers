@class ATIDSConnectionInfo, NSString, NSMutableArray, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface ATIDSService : ATMessageLinkListener <IDSServiceDelegate, ATSocketDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_service;
    ATIDSConnectionInfo *_connectionInfo;
    NSMutableArray *_listeners;
    BOOL _running;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)openSocketPriorityFromATPendingChangePriority:(int)a0;

- (void)addListener:(id)a0;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)pairedDevice;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)removeListener:(id)a0;
- (BOOL)start;
- (void)_sendWakeup;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (BOOL)hasPairedDevice;
- (id)_messageTypeToString:(int)a0;
- (void)stop;
- (id)initWithServiceName:(id)a0;
- (void)socketDidClose:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)_cancelPendingConnectionRequests;
- (void)requestConnectionToPairedDeviceWithPriority:(long long)a0;
- (void)_scheduleConnectWithPriority:(long long)a0;
- (void).cxx_destruct;
- (id)deviceForId:(id)a0;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)_connect;
- (void)socket:(id)a0 hasDataAvailable:(const char *)a1 length:(long long)a2;
- (void)setPreferWifi:(BOOL)a0;
- (void)_scheduleReconnect;

@end
