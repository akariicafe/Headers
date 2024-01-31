@class OS_xpc_remote_connection, NSMutableDictionary, NSMutableSet, NSObject, OS_remote_device_browser;
@protocol OS_dispatch_queue;

@interface PCCBridgeEndpoint : PCCEndpoint {
    OS_remote_device_browser *_device_browser;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_initializationQueue;
    NSMutableDictionary *_remoteDevices;
    NSMutableDictionary *_remoteCRKeys;
    NSMutableDictionary *_outgoingConnections;
    OS_xpc_remote_connection *_listeningConnection;
    NSMutableSet *_interruptedDevices;
}

+ (id)UDIDForRemoteDevice:(id)a0;
+ (void)addSenderToMessage:(id)a0;
+ (id)identifierForRemoteDevice:(id)a0;
+ (BOOL)isSupportedRemoteDeviceType:(unsigned int)a0;
+ (id)remoteDeviceForIdentifier:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isDeviceNearby:(id)a0;
- (id)connectionForIdentifier:(id)a0;
- (id)deviceIds;
- (void)enterInterruptedStateFrom:(id)a0;
- (void)exitInterruptedStateFrom:(id)a0;
- (id)identifierForTarget:(id)a0;
- (void)runWithDelegate:(id)a0;
- (id)send:(id)a0 file:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)send:(id)a0 message:(id)a1 error:(id *)a2;
- (void)setupDeviceStateChangeHandler;
- (void)setupIncomingEventListener;
- (void)setupOutgoingConnection:(id)a0;
- (void)stashCrashReporterKeyForIdentifier:(id)a0;
- (id)synchronize:(id)a0 withOptions:(id)a1;

@end
