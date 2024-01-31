@class NSXPCListener, NSMutableDictionary, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_group, OS_os_log, OS_dispatch_queue;

@interface uarpRbdcClient : NSObject <UARPStandaloneCommandRequestor, NSXPCListenerDelegate> {
    NSObject<OS_os_log> *_log;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly) uarpRbdcClient *sharedInstance;

@property (retain) NSObject<OS_dispatch_group> *assetSolicitationGroup;
@property (retain) NSMutableDictionary *solicitedAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcConnectionToManager;

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)remoteObject;
- (void).cxx_destruct;
- (id)dynamicAssetSolicitation:(id)a0 modelNumber:(id)a1;
- (void)dynamicAssetSolicitationComplete:(id)a0 modelNumber:(id)a1;

@end
