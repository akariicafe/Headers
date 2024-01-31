@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue, GTRemoteConnectionProvider;

@interface GTURLAccessProvider : NSObject <GTURLAccessProvider> {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_registeredURLs;
    NSString *_deviceUDID;
    id<GTRemoteConnectionProvider> _remoteConnectionProvider;
    NSObject<OS_dispatch_queue> *_urlProviderQueue;
}

- (void).cxx_destruct;
- (void)copyIdentifier:(id)a0 toDevice:(id)a1 allowLocalURL:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)copyIdentifier:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDeviceUDID:(id)a0 remoteConnectionProvider:(id)a1;
- (id)makeURL:(id)a0;
- (void)securityScopedURLFromSandboxID:(id)a0 completionHandler:(id /* block */)a1;
- (void)transferIdentifier:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)urlForPath:(id)a0;

@end
