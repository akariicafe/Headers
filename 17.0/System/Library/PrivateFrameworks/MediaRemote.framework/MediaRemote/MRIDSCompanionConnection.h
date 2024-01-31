@class IDSDevice, NSString, NSMutableDictionary, MRDeviceInfo, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface MRIDSCompanionConnection : NSObject <IDSServiceDelegate> {
    IDSService *_service;
    IDSDevice *_device;
    MRDeviceInfo *_deviceInfo;
    NSMutableDictionary *_messageHandlers;
    NSMutableDictionary *_destinationMessageHandlers;
    NSMutableDictionary *_responseHandlers;
    unsigned long long _totalOutgoingMessageCount;
    NSObject<OS_dispatch_queue> *_idsQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    int _firstUnlockToken;
}

@property (retain, nonatomic) IDSDevice *device;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)init;
- (void).cxx_destruct;
- (void)resetConnection;
- (id)name;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (id)deviceDebugName;
- (BOOL)sendMessage:(id)a0 type:(id)a1 destination:(id)a2 session:(id)a3 options:(id)a4 priority:(long long)a5 response:(id /* block */)a6;
- (id)_configurationFromDestination:(id)a0 session:(id)a1;
- (unsigned long long)_generateMessageID;
- (void)_maybeDeviceConnectionStatusChanged;
- (BOOL)_sendMessage:(id)a0 type:(id)a1 destination:(id)a2 session:(id)a3 options:(id)a4 priority:(long long)a5 replyID:(id)a6 response:(id /* block */)a7;
- (void)handleDidReceiveResetConnectionRequest;
- (void)initializeService;
- (void)removeMessageHandlerForType:(id)a0;
- (void)removeMessageHandlerForType:(id)a0 destination:(id)a1 session:(id)a2;
- (BOOL)sendMessage:(id)a0 type:(id)a1 destination:(id)a2 session:(id)a3 options:(id)a4 priority:(long long)a5;
- (void)setMessageHandler:(id /* block */)a0 forType:(id)a1;
- (void)setMessageHandler:(id /* block */)a0 forType:(id)a1 destination:(id)a2 session:(id)a3;

@end
