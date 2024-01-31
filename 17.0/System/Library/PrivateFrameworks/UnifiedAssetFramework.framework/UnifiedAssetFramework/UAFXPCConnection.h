@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface UAFXPCConnection : NSObject <UAFXPCProxyService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSString *_serviceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_connection;
- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
- (void)_connectionInvalidated;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)_connectionInterrupted;
- (oneway void)downloadSiriAssets;
- (oneway void)operationWithConfig:(id)a0 completion:(id /* block */)a1;
- (oneway void)checkAssetStatus:(id /* block */)a0;
- (oneway void)diagnosticInformation:(id /* block */)a0;
- (oneway void)downloadDictationAssetsForLanguage:(id)a0;
- (oneway void)downloadSiriAssetsOverCellular;
- (oneway void)downloadSizeInBytesForLanguage:(id)a0 completion:(id /* block */)a1;
- (oneway void)postAssetNotificationIfNeeded;
- (oneway void)postDictationAssetNotificationForLanguage:(id)a0;

@end
